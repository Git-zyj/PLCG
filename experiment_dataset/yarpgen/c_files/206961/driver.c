#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2251338410750754654LL;
unsigned int var_1 = 2491964090U;
signed char var_3 = (signed char)34;
int var_4 = -1369821471;
long long int var_5 = -379343415560944891LL;
unsigned long long int var_7 = 16072665959918002706ULL;
_Bool var_11 = (_Bool)1;
int var_16 = -1561871307;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)123;
unsigned long long int var_19 = 11802550970993119820ULL;
long long int var_20 = -4525136466636162365LL;
unsigned long long int var_21 = 225605385253297430ULL;
unsigned int var_22 = 2075821059U;
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
