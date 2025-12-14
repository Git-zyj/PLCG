#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-29872;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2522586125U;
signed char var_4 = (signed char)102;
short var_5 = (short)-26080;
unsigned int var_9 = 3719223602U;
int zero = 0;
short var_11 = (short)27662;
int var_12 = 811658013;
short var_13 = (short)-27156;
signed char var_14 = (signed char)77;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
