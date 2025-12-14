#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3266455725U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 7381989840607467773ULL;
int var_6 = -1264827722;
unsigned long long int var_9 = 17837888759407714870ULL;
unsigned long long int var_10 = 16421664495727752468ULL;
int zero = 0;
unsigned long long int var_11 = 16961551436295927605ULL;
short var_12 = (short)-3156;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
