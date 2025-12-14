#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)10221;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)104;
unsigned int var_5 = 1380073922U;
unsigned long long int var_8 = 11837275714169697709ULL;
short var_10 = (short)-13478;
short var_13 = (short)15935;
int zero = 0;
long long int var_16 = 8981548192105453933LL;
unsigned char var_17 = (unsigned char)98;
unsigned short var_18 = (unsigned short)33486;
signed char var_19 = (signed char)40;
unsigned long long int var_20 = 5840994146273694268ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
