#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)31621;
unsigned long long int var_8 = 2294155798604393756ULL;
signed char var_16 = (signed char)-67;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 203256249309880437ULL;
unsigned char var_21 = (unsigned char)221;
_Bool var_22 = (_Bool)0;
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
