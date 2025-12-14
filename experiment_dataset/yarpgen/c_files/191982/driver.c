#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)11560;
unsigned short var_5 = (unsigned short)49062;
unsigned long long int var_6 = 12284419733892075036ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)46066;
signed char var_11 = (signed char)15;
unsigned int var_12 = 3592565424U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)33481;
void init() {
}

void checksum() {
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
