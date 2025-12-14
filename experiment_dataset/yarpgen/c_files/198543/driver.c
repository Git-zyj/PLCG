#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)-25837;
signed char var_8 = (signed char)89;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-75;
short var_13 = (short)-2565;
int var_14 = -930004529;
unsigned int var_16 = 1075734867U;
long long int var_18 = -5758833238278134556LL;
unsigned int var_19 = 279257051U;
int zero = 0;
unsigned int var_20 = 3798455442U;
signed char var_21 = (signed char)-78;
int var_22 = -1600700353;
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
