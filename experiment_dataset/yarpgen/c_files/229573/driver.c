#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 9125658225187138584LL;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)8292;
short var_12 = (short)-15882;
int zero = 0;
unsigned short var_13 = (unsigned short)59422;
unsigned long long int var_14 = 13358380661288294793ULL;
unsigned int var_15 = 1599141267U;
long long int var_16 = -1394506097093592300LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
