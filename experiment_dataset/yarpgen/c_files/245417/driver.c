#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-94;
signed char var_2 = (signed char)3;
unsigned long long int var_6 = 4801531465236811355ULL;
_Bool var_8 = (_Bool)0;
int var_10 = -1241676983;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)59;
int zero = 0;
short var_14 = (short)-17604;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
