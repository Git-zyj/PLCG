#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)18874;
int var_3 = 459937368;
unsigned char var_7 = (unsigned char)50;
short var_8 = (short)29981;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)1920;
int zero = 0;
signed char var_14 = (signed char)-83;
short var_15 = (short)-30743;
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
