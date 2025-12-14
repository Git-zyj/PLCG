#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)20466;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-12908;
signed char var_18 = (signed char)59;
int zero = 0;
unsigned long long int var_19 = 4643572958770517958ULL;
unsigned short var_20 = (unsigned short)54842;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
