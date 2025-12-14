#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 441461168;
unsigned short var_2 = (unsigned short)33165;
unsigned long long int var_3 = 16686507034212063157ULL;
unsigned int var_7 = 2016497737U;
unsigned int var_10 = 499411115U;
int zero = 0;
unsigned char var_14 = (unsigned char)36;
unsigned short var_15 = (unsigned short)53429;
long long int var_16 = 2684300445329090343LL;
short var_17 = (short)-25386;
short var_18 = (short)-24865;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
