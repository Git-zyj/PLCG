#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)7096;
short var_6 = (short)28637;
unsigned short var_7 = (unsigned short)38250;
signed char var_13 = (signed char)99;
int zero = 0;
short var_14 = (short)18588;
unsigned long long int var_15 = 11674907318214844701ULL;
long long int var_16 = -6293514960419603889LL;
unsigned short var_17 = (unsigned short)43000;
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
