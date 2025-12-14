#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3690436901U;
long long int var_2 = -6844108259250003934LL;
signed char var_5 = (signed char)81;
long long int var_11 = 5349558581538766069LL;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 754950263U;
int zero = 0;
unsigned char var_20 = (unsigned char)185;
short var_21 = (short)12507;
unsigned int var_22 = 485458676U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
