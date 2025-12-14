#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = -1568542762;
unsigned long long int var_3 = 12542120139657063734ULL;
int var_5 = -1696259240;
unsigned long long int var_6 = 10123971281733564019ULL;
unsigned int var_7 = 1015143998U;
unsigned int var_9 = 2223287965U;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = 1157396350;
signed char var_12 = (signed char)95;
void init() {
}

void checksum() {
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
