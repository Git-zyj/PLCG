#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1358453790U;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 8043040405485502339ULL;
long long int var_9 = -2042197827090467253LL;
signed char var_13 = (signed char)-22;
int var_14 = -700227031;
int zero = 0;
signed char var_15 = (signed char)-10;
unsigned int var_16 = 1194410078U;
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
