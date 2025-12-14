#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10567146314273625091ULL;
unsigned short var_8 = (unsigned short)34562;
unsigned long long int var_12 = 17280893263992547205ULL;
unsigned int var_13 = 929984100U;
int var_16 = -228619425;
signed char var_17 = (signed char)-88;
int var_18 = -747801501;
int zero = 0;
signed char var_20 = (signed char)81;
signed char var_21 = (signed char)31;
signed char var_22 = (signed char)14;
long long int var_23 = -7827927207529086475LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
