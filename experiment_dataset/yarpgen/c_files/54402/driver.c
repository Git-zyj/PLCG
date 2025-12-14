#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-83;
unsigned long long int var_4 = 12427526443202571699ULL;
short var_5 = (short)11142;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 7200800098965871186ULL;
unsigned char var_10 = (unsigned char)185;
int zero = 0;
signed char var_13 = (signed char)-10;
signed char var_14 = (signed char)-6;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
