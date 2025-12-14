#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 453908135U;
_Bool var_5 = (_Bool)1;
short var_7 = (short)32295;
unsigned long long int var_10 = 6086527324772332872ULL;
int zero = 0;
signed char var_16 = (signed char)-46;
_Bool var_17 = (_Bool)0;
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
