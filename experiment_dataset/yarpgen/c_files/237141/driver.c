#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2983710997508794125ULL;
signed char var_2 = (signed char)94;
unsigned int var_3 = 1047992355U;
signed char var_5 = (signed char)-102;
int var_9 = -123262266;
int zero = 0;
_Bool var_10 = (_Bool)0;
signed char var_11 = (signed char)125;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 163791856U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
