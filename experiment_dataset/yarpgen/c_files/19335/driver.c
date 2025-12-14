#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)10;
short var_6 = (short)-29706;
unsigned int var_8 = 514169458U;
unsigned long long int var_9 = 17423083545069743628ULL;
unsigned char var_10 = (unsigned char)156;
unsigned long long int var_11 = 7727589728764884013ULL;
unsigned int var_13 = 2051242993U;
int zero = 0;
unsigned long long int var_15 = 18223522219114905610ULL;
_Bool var_16 = (_Bool)0;
long long int var_17 = 339071347187923778LL;
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
