#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1647063089125714689ULL;
unsigned short var_6 = (unsigned short)32788;
long long int var_8 = 305926796633210438LL;
signed char var_12 = (signed char)-85;
int zero = 0;
unsigned int var_13 = 565623682U;
long long int var_14 = 6800791839567560752LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
