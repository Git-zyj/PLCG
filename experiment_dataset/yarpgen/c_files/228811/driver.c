#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3445541038U;
unsigned int var_3 = 3600844372U;
unsigned int var_4 = 4237977222U;
unsigned int var_6 = 123707489U;
unsigned int var_8 = 3824227130U;
unsigned int var_10 = 439811488U;
unsigned int var_11 = 3800839173U;
unsigned int var_12 = 3476872131U;
unsigned int var_13 = 1720538677U;
int zero = 0;
unsigned int var_14 = 1664182775U;
unsigned int var_15 = 2083537334U;
unsigned int var_16 = 4150712022U;
unsigned int var_17 = 1496655169U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
