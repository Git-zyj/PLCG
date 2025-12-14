#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4474914669198901370LL;
unsigned long long int var_8 = 10132300194249520856ULL;
unsigned long long int var_14 = 6701206730113427427ULL;
unsigned long long int var_15 = 13898159963546817155ULL;
int zero = 0;
signed char var_16 = (signed char)55;
unsigned long long int var_17 = 11093269782627930271ULL;
_Bool var_18 = (_Bool)0;
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
