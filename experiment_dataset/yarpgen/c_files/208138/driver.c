#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)9550;
_Bool var_5 = (_Bool)1;
signed char var_8 = (signed char)-9;
long long int var_10 = -1980510974670550491LL;
long long int var_12 = 2836155956938764997LL;
int zero = 0;
unsigned long long int var_13 = 4730983872871914081ULL;
int var_14 = 1002693074;
unsigned short var_15 = (unsigned short)32063;
_Bool var_16 = (_Bool)0;
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
