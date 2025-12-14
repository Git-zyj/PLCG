#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12746907886496016475ULL;
short var_1 = (short)-21995;
short var_2 = (short)712;
unsigned long long int var_3 = 7506290240985632442ULL;
unsigned char var_6 = (unsigned char)175;
unsigned int var_7 = 485210363U;
int var_11 = -1238261768;
long long int var_12 = -3686557355039479499LL;
unsigned long long int var_14 = 501544611130906288ULL;
unsigned long long int var_15 = 11092169417692911523ULL;
unsigned char var_16 = (unsigned char)222;
int var_17 = -1978381997;
unsigned char var_18 = (unsigned char)85;
int zero = 0;
short var_20 = (short)10544;
int var_21 = 1704502017;
short var_22 = (short)-21762;
unsigned char var_23 = (unsigned char)157;
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
