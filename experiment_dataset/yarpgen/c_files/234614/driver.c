#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4258465633165594706LL;
signed char var_3 = (signed char)-123;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3299358218789847856LL;
int var_8 = -813499834;
int zero = 0;
int var_13 = 1543548014;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)33;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
