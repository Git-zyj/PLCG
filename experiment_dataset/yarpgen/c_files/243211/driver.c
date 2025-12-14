#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-104;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2978900063U;
signed char var_11 = (signed char)28;
_Bool var_12 = (_Bool)0;
int var_15 = -818931109;
int zero = 0;
unsigned short var_16 = (unsigned short)18703;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
