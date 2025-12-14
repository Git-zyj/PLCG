#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)133;
signed char var_2 = (signed char)-121;
int var_12 = 939970096;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_18 = 1914929548;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-120;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
