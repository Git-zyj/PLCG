#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_8 = -7176880214680732965LL;
unsigned long long int var_15 = 9470268863567674247ULL;
int var_16 = -1495314447;
unsigned int var_17 = 453719678U;
unsigned short var_18 = (unsigned short)48372;
int zero = 0;
_Bool var_20 = (_Bool)0;
int var_21 = -1288105188;
short var_22 = (short)28651;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
