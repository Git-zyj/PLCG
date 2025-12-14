#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5801166915012864347ULL;
signed char var_5 = (signed char)74;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 15878469666705240031ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)112;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 3530170118367196057ULL;
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
