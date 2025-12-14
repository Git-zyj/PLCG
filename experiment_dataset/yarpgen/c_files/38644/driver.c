#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12913829300861016736ULL;
unsigned char var_2 = (unsigned char)248;
unsigned int var_3 = 3158916616U;
unsigned char var_4 = (unsigned char)115;
_Bool var_7 = (_Bool)0;
int var_11 = 1050680911;
int var_15 = 1732672744;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
short var_18 = (short)20395;
unsigned short var_19 = (unsigned short)59138;
unsigned short var_20 = (unsigned short)30652;
short var_21 = (short)378;
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
