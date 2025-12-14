#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)30848;
long long int var_5 = 3633948453495223288LL;
short var_8 = (short)32196;
signed char var_11 = (signed char)5;
_Bool var_14 = (_Bool)1;
unsigned long long int var_18 = 5692391469808261745ULL;
unsigned long long int var_19 = 2762485204366092613ULL;
int zero = 0;
int var_20 = -1992937186;
long long int var_21 = 9071004214929703406LL;
unsigned char var_22 = (unsigned char)46;
signed char var_23 = (signed char)-67;
unsigned short var_24 = (unsigned short)12472;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
