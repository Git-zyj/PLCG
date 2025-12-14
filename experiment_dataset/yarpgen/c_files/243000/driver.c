#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)138;
unsigned int var_3 = 3139348952U;
short var_7 = (short)14628;
unsigned char var_8 = (unsigned char)142;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 2370391902U;
long long int var_13 = -5594974950926357664LL;
int zero = 0;
short var_17 = (short)5234;
_Bool var_18 = (_Bool)0;
void init() {
}

void checksum() {
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
