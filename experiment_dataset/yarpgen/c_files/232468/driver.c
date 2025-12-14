#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_7 = (unsigned char)4;
unsigned long long int var_11 = 8479627605537537488ULL;
unsigned long long int var_15 = 13490720222889113391ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)204;
unsigned char var_17 = (unsigned char)199;
unsigned int var_18 = 2931876887U;
unsigned long long int var_19 = 16649659281576219587ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
