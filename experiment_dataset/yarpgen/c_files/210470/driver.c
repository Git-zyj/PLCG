#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)31807;
unsigned short var_1 = (unsigned short)38338;
_Bool var_2 = (_Bool)0;
unsigned char var_7 = (unsigned char)157;
int zero = 0;
int var_13 = 759933429;
unsigned char var_14 = (unsigned char)142;
long long int var_15 = -8224166284023685635LL;
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
