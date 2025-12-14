#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)48638;
unsigned long long int var_3 = 5673319006329065359ULL;
long long int var_7 = 448770455720151980LL;
unsigned long long int var_10 = 17095907981157668650ULL;
signed char var_14 = (signed char)-21;
int zero = 0;
unsigned int var_17 = 1819599301U;
short var_18 = (short)-17361;
long long int var_19 = 8561034174902785446LL;
int var_20 = -511336801;
long long int var_21 = 1160454748440526085LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
