#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3016193730U;
int var_3 = -298246140;
short var_6 = (short)22666;
short var_10 = (short)-20904;
unsigned short var_12 = (unsigned short)33617;
int zero = 0;
unsigned short var_16 = (unsigned short)61429;
unsigned long long int var_17 = 2735135041509229645ULL;
unsigned long long int var_18 = 8802331724818615059ULL;
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
