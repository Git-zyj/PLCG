#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2902794129501563738LL;
unsigned char var_2 = (unsigned char)124;
unsigned int var_3 = 394626840U;
long long int var_7 = -775133184099951106LL;
unsigned char var_9 = (unsigned char)58;
int zero = 0;
short var_14 = (short)-2979;
unsigned long long int var_15 = 7721558692616097672ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
