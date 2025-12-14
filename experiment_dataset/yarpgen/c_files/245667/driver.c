#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 125209298U;
long long int var_5 = -3014102616625040417LL;
unsigned int var_7 = 60763876U;
signed char var_16 = (signed char)83;
int zero = 0;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)-62;
void init() {
}

void checksum() {
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
