#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-117;
unsigned long long int var_4 = 4425156908682932370ULL;
signed char var_6 = (signed char)34;
long long int var_8 = -3644357244768725161LL;
unsigned long long int var_9 = 1783054408205340141ULL;
signed char var_11 = (signed char)-21;
signed char var_12 = (signed char)99;
short var_13 = (short)11671;
signed char var_14 = (signed char)56;
unsigned long long int var_15 = 397207822585324739ULL;
int zero = 0;
short var_16 = (short)-18654;
short var_17 = (short)14180;
unsigned char var_18 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
