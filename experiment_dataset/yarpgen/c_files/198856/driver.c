#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-4277;
unsigned int var_6 = 1946765881U;
unsigned long long int var_7 = 15593861181562114572ULL;
unsigned char var_8 = (unsigned char)111;
unsigned long long int var_10 = 8472298213742219932ULL;
long long int var_12 = -6748053586375352402LL;
int var_13 = 910282696;
unsigned long long int var_14 = 15376438526768579267ULL;
long long int var_15 = -7394169640474533713LL;
signed char var_16 = (signed char)-100;
int zero = 0;
unsigned long long int var_17 = 12250467742696278741ULL;
unsigned int var_18 = 2518829649U;
_Bool var_19 = (_Bool)1;
int var_20 = 229965666;
unsigned char var_21 = (unsigned char)171;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
