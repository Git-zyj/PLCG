#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 1155851847;
unsigned short var_2 = (unsigned short)64930;
unsigned long long int var_5 = 5320103484903583368ULL;
long long int var_6 = 7837199005330519895LL;
signed char var_7 = (signed char)-16;
int var_9 = -765831813;
unsigned int var_10 = 2517103731U;
_Bool var_11 = (_Bool)1;
signed char var_17 = (signed char)-11;
int zero = 0;
unsigned long long int var_18 = 14596604969007503823ULL;
long long int var_19 = -8711569932408724282LL;
void init() {
}

void checksum() {
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
