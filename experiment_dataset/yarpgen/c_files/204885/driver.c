#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10451484129485201722ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_9 = (unsigned short)51687;
int zero = 0;
unsigned short var_11 = (unsigned short)27699;
unsigned long long int var_12 = 265998151264499538ULL;
unsigned char var_13 = (unsigned char)42;
unsigned long long int var_14 = 8947906582930377162ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
