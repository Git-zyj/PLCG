#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1802687904U;
signed char var_10 = (signed char)-79;
long long int var_11 = 7214810637105387029LL;
int zero = 0;
unsigned int var_16 = 132000977U;
unsigned int var_17 = 1974986695U;
long long int var_18 = -6162852722392071920LL;
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
