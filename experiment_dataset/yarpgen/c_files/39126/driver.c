#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2490322805U;
_Bool var_4 = (_Bool)0;
unsigned int var_5 = 3382468391U;
signed char var_16 = (signed char)93;
unsigned long long int var_19 = 4861777276400519748ULL;
int zero = 0;
short var_20 = (short)3362;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)-71;
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
