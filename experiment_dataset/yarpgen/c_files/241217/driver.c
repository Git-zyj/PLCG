#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)32395;
unsigned short var_8 = (unsigned short)38238;
unsigned char var_10 = (unsigned char)42;
unsigned char var_11 = (unsigned char)123;
_Bool var_14 = (_Bool)0;
unsigned char var_16 = (unsigned char)120;
int zero = 0;
long long int var_19 = 7643542061576713872LL;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
