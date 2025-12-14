#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_3 = (signed char)75;
unsigned long long int var_4 = 2008162637128770475ULL;
long long int var_7 = 4663647131670101709LL;
unsigned long long int var_12 = 8537587544871646008ULL;
int zero = 0;
long long int var_14 = -5217155827402560568LL;
long long int var_15 = -2657698064005764660LL;
unsigned short var_16 = (unsigned short)7840;
void init() {
}

void checksum() {
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
