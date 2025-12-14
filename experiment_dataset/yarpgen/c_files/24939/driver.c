#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1015981855;
unsigned short var_3 = (unsigned short)48232;
unsigned short var_5 = (unsigned short)17275;
long long int var_6 = -1186560951581707582LL;
signed char var_10 = (signed char)36;
unsigned long long int var_11 = 1201609241925717127ULL;
short var_13 = (short)-1914;
int zero = 0;
int var_14 = -1848591988;
unsigned long long int var_15 = 17370616319559197930ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
