#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 561397951U;
_Bool var_5 = (_Bool)0;
signed char var_13 = (signed char)-75;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 2893400002U;
long long int var_21 = -9042563717140393004LL;
signed char var_22 = (signed char)-97;
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
