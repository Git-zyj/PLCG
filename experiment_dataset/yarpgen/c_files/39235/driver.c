#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4406759304873323710ULL;
unsigned int var_5 = 3507930263U;
unsigned char var_7 = (unsigned char)203;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 2092312450695945598ULL;
unsigned short var_13 = (unsigned short)31203;
unsigned int var_14 = 1737956726U;
unsigned long long int var_15 = 12095256114239214628ULL;
unsigned char var_16 = (unsigned char)134;
unsigned int var_19 = 2207981267U;
int zero = 0;
unsigned char var_20 = (unsigned char)15;
unsigned char var_21 = (unsigned char)88;
void init() {
}

void checksum() {
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
