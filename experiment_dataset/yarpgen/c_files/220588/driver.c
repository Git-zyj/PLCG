#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41111;
unsigned short var_8 = (unsigned short)35098;
unsigned char var_10 = (unsigned char)108;
long long int var_11 = -4992869061633248935LL;
long long int var_14 = -5863632423509513682LL;
int zero = 0;
int var_18 = -457483359;
short var_19 = (short)6288;
_Bool var_20 = (_Bool)1;
int var_21 = 1917645118;
unsigned char var_22 = (unsigned char)78;
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
