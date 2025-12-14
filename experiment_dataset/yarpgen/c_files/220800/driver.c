#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-85;
_Bool var_6 = (_Bool)0;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 16238040763085288327ULL;
short var_16 = (short)14903;
signed char var_17 = (signed char)-101;
unsigned short var_18 = (unsigned short)33357;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
