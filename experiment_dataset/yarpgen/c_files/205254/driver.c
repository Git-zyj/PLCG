#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 17985565740846192198ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned char var_14 = (unsigned char)0;
short var_15 = (short)-27529;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
