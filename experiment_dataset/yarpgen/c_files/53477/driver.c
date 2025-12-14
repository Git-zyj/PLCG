#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 768578505;
unsigned long long int var_5 = 7887335600834752354ULL;
unsigned int var_6 = 1135271275U;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 951133294U;
unsigned long long int var_11 = 10672788374307676063ULL;
signed char var_12 = (signed char)95;
int zero = 0;
signed char var_14 = (signed char)7;
long long int var_15 = 6940862222663701442LL;
void init() {
}

void checksum() {
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
