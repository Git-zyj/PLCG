#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)6;
signed char var_1 = (signed char)-99;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 8040842461821383306ULL;
unsigned int var_5 = 170779338U;
signed char var_6 = (signed char)-65;
signed char var_9 = (signed char)71;
unsigned long long int var_10 = 18039606191523719990ULL;
signed char var_12 = (signed char)-113;
signed char var_16 = (signed char)-93;
int zero = 0;
unsigned int var_18 = 313113700U;
unsigned short var_19 = (unsigned short)37342;
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
