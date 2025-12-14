#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)68;
long long int var_1 = 3888534878504798269LL;
signed char var_4 = (signed char)54;
long long int var_5 = 5558127166351052298LL;
long long int var_8 = -6133823124484558636LL;
int zero = 0;
unsigned int var_10 = 3573119475U;
signed char var_11 = (signed char)87;
signed char var_12 = (signed char)38;
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
