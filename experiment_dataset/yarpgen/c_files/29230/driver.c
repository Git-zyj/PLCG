#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)14325;
signed char var_1 = (signed char)64;
long long int var_2 = -2265096771756363996LL;
unsigned long long int var_7 = 17575025157421448469ULL;
int zero = 0;
long long int var_13 = 7472452605672456839LL;
short var_14 = (short)-30085;
long long int var_15 = 577153785615896759LL;
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
