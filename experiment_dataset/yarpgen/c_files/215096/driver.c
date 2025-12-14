#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2274530232U;
unsigned short var_1 = (unsigned short)31120;
int var_2 = 14685330;
int var_3 = -771573118;
short var_4 = (short)16281;
signed char var_5 = (signed char)103;
int var_6 = 175992480;
int var_7 = -1425692962;
unsigned long long int var_8 = 2578999017124092585ULL;
signed char var_9 = (signed char)106;
unsigned int var_10 = 4140961692U;
unsigned char var_11 = (unsigned char)65;
unsigned int var_12 = 940027126U;
int zero = 0;
long long int var_13 = 2396813642258154994LL;
unsigned long long int var_14 = 17660608937415821351ULL;
short var_15 = (short)-30001;
unsigned char var_16 = (unsigned char)173;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
