#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)3180;
short var_2 = (short)28377;
unsigned long long int var_4 = 16060534384800816437ULL;
signed char var_7 = (signed char)-45;
_Bool var_9 = (_Bool)1;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_15 = 1942207491;
signed char var_16 = (signed char)115;
signed char var_17 = (signed char)41;
void init() {
}

void checksum() {
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
