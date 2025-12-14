#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 1594714561U;
unsigned int var_2 = 1276393013U;
unsigned long long int var_3 = 4574947367090507655ULL;
unsigned short var_7 = (unsigned short)689;
_Bool var_11 = (_Bool)0;
signed char var_13 = (signed char)84;
unsigned long long int var_14 = 11986604183191429056ULL;
unsigned long long int var_19 = 5163224913601870568ULL;
int zero = 0;
unsigned long long int var_20 = 9931678425190025005ULL;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
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
