#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 669926362;
short var_3 = (short)-30812;
unsigned short var_7 = (unsigned short)8802;
signed char var_9 = (signed char)-68;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned char var_17 = (unsigned char)127;
unsigned int var_18 = 639390477U;
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
