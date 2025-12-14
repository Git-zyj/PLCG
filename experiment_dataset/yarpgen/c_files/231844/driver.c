#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3237172865U;
unsigned int var_4 = 232556898U;
long long int var_7 = 6537135932946792525LL;
unsigned long long int var_9 = 14925497209357924382ULL;
unsigned long long int var_10 = 9118433035615659133ULL;
long long int var_12 = 8573862629870147423LL;
int zero = 0;
int var_13 = 2132975735;
signed char var_14 = (signed char)14;
unsigned long long int var_15 = 15975602684500694060ULL;
short var_16 = (short)16037;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
