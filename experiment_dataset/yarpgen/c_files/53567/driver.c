#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -399454071;
unsigned int var_2 = 1013704760U;
unsigned int var_4 = 2441782292U;
unsigned short var_7 = (unsigned short)26973;
unsigned short var_8 = (unsigned short)25147;
_Bool var_10 = (_Bool)1;
int var_12 = -1853325603;
short var_13 = (short)-31725;
int var_15 = -39313668;
long long int var_16 = 3731275856108385140LL;
int zero = 0;
unsigned short var_18 = (unsigned short)22509;
long long int var_19 = 7108349806816062255LL;
int var_20 = 922255804;
unsigned int var_21 = 4002084407U;
unsigned char var_22 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
