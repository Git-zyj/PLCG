#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)47;
unsigned char var_5 = (unsigned char)11;
unsigned long long int var_6 = 16912051203862583448ULL;
unsigned short var_12 = (unsigned short)12314;
short var_14 = (short)-7537;
int zero = 0;
unsigned char var_15 = (unsigned char)109;
unsigned short var_16 = (unsigned short)9194;
long long int var_17 = 2349978320064846422LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
