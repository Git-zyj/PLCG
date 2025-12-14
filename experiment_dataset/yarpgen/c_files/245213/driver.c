#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)91;
unsigned short var_6 = (unsigned short)18654;
long long int var_10 = -435783812780584088LL;
signed char var_11 = (signed char)126;
int zero = 0;
unsigned int var_19 = 2639759030U;
_Bool var_20 = (_Bool)0;
int var_21 = -1369708057;
unsigned long long int var_22 = 6931718753775386750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
