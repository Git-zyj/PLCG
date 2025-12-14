#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11964194629982645162ULL;
long long int var_1 = 3134066877958195028LL;
unsigned long long int var_3 = 430212937978139950ULL;
unsigned long long int var_5 = 5553458354136118198ULL;
int zero = 0;
int var_10 = -1112616933;
signed char var_11 = (signed char)5;
unsigned long long int var_12 = 10579223993278911919ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
