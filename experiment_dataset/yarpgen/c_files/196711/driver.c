#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 8574026888387861354ULL;
short var_2 = (short)-25310;
unsigned int var_7 = 3569312714U;
int var_13 = -157954135;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)180;
int zero = 0;
int var_16 = 320590546;
signed char var_17 = (signed char)-23;
short var_18 = (short)-28917;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
