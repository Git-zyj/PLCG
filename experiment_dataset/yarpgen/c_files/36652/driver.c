#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2698;
short var_2 = (short)-9455;
unsigned long long int var_3 = 5231383753070042173ULL;
unsigned long long int var_4 = 11378261161187574461ULL;
short var_6 = (short)-31657;
long long int var_9 = 813973918062255278LL;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)-98;
int zero = 0;
unsigned short var_16 = (unsigned short)53398;
long long int var_17 = 253226561423445319LL;
void init() {
}

void checksum() {
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
