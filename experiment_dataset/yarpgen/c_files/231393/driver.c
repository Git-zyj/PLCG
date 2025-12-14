#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 566629041U;
signed char var_4 = (signed char)-50;
long long int var_5 = 6113204607888236767LL;
int var_6 = -1751348696;
unsigned short var_8 = (unsigned short)52700;
short var_9 = (short)15724;
long long int var_10 = 4690070726222888636LL;
int zero = 0;
long long int var_12 = -8286653110762379707LL;
unsigned long long int var_13 = 16741039976222132755ULL;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 1579409959U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
