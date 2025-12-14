#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-37;
long long int var_2 = -8786457063222796312LL;
int var_3 = -770991831;
unsigned int var_4 = 3967089454U;
unsigned long long int var_6 = 14582593302410080607ULL;
unsigned int var_10 = 3184737298U;
unsigned long long int var_12 = 11763868668457597891ULL;
signed char var_15 = (signed char)-83;
unsigned short var_16 = (unsigned short)55539;
unsigned int var_18 = 612795961U;
int var_19 = -1374573623;
int zero = 0;
int var_20 = -334268998;
unsigned int var_21 = 721616972U;
short var_22 = (short)391;
signed char var_23 = (signed char)-57;
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
