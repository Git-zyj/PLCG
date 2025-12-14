#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)17490;
unsigned short var_1 = (unsigned short)5680;
long long int var_2 = -2311056225502259657LL;
short var_5 = (short)-32462;
unsigned int var_10 = 1290729873U;
unsigned char var_11 = (unsigned char)165;
int zero = 0;
short var_13 = (short)27801;
int var_14 = -631460183;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
