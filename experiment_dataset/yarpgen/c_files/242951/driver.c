#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)48;
unsigned long long int var_2 = 9344542209571455667ULL;
short var_5 = (short)-17919;
unsigned char var_7 = (unsigned char)18;
short var_10 = (short)-7878;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 14362927978967341527ULL;
unsigned short var_16 = (unsigned short)24516;
unsigned long long int var_17 = 9352594951413002248ULL;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
