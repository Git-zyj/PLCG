#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5120423816876961310ULL;
unsigned int var_6 = 103214353U;
unsigned long long int var_8 = 12741573052217297721ULL;
int zero = 0;
short var_10 = (short)17364;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 533288428U;
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
