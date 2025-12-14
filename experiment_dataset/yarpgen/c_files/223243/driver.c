#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41225;
int var_6 = -1327956641;
unsigned int var_7 = 337642069U;
signed char var_10 = (signed char)7;
unsigned int var_14 = 1029384972U;
int zero = 0;
unsigned int var_16 = 1247059806U;
unsigned short var_17 = (unsigned short)10376;
unsigned short var_18 = (unsigned short)38868;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
