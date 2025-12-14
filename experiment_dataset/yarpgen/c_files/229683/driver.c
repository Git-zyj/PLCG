#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)141;
short var_12 = (short)13095;
unsigned long long int var_13 = 14587636381161500610ULL;
unsigned long long int var_17 = 14603159060739557327ULL;
int var_18 = 437497495;
int var_19 = -537618029;
int zero = 0;
short var_20 = (short)-20090;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 1180266328200648780ULL;
unsigned char var_23 = (unsigned char)201;
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
