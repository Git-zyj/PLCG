#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
signed char var_2 = (signed char)-3;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-72;
int var_8 = 1345592099;
signed char var_9 = (signed char)-32;
signed char var_10 = (signed char)109;
signed char var_12 = (signed char)3;
int zero = 0;
signed char var_13 = (signed char)-22;
unsigned char var_14 = (unsigned char)98;
int var_15 = -1532404801;
signed char var_16 = (signed char)-7;
int var_17 = -940544944;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
