#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1017527683984762289ULL;
int var_12 = -1353437425;
int zero = 0;
signed char var_18 = (signed char)-8;
_Bool var_19 = (_Bool)1;
long long int var_20 = 6083291118041700009LL;
unsigned short var_21 = (unsigned short)52925;
unsigned short var_22 = (unsigned short)54111;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
