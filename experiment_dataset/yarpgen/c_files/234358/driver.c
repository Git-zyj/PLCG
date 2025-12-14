#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)49799;
_Bool var_6 = (_Bool)1;
long long int var_10 = 7394764381250564347LL;
signed char var_11 = (signed char)85;
int zero = 0;
long long int var_12 = 7777621729767595779LL;
signed char var_13 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
