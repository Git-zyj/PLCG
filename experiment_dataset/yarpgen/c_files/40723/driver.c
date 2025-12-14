#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)117;
long long int var_5 = 7620597229226267259LL;
unsigned short var_6 = (unsigned short)29797;
_Bool var_8 = (_Bool)1;
unsigned long long int var_10 = 7605073130910466127ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)41443;
unsigned short var_13 = (unsigned short)36251;
int var_15 = 698299811;
int var_18 = -1048468622;
int zero = 0;
long long int var_20 = -2189657386307422770LL;
unsigned short var_21 = (unsigned short)19740;
unsigned long long int var_22 = 15513459917430414206ULL;
void init() {
}

void checksum() {
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
