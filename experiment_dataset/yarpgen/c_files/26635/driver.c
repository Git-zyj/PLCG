#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5720098884863913400LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 4145327379657910013LL;
unsigned int var_13 = 1026188107U;
int zero = 0;
int var_15 = -947848415;
signed char var_16 = (signed char)91;
void init() {
}

void checksum() {
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
