#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 747652770;
unsigned short var_5 = (unsigned short)55048;
unsigned long long int var_6 = 5954821498841710397ULL;
short var_7 = (short)-11072;
unsigned long long int var_8 = 15420649613024109062ULL;
int var_10 = -1556588588;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7937761963335947336ULL;
signed char var_18 = (signed char)-76;
signed char var_19 = (signed char)-82;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
