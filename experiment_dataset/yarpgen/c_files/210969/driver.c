#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -578055765;
unsigned int var_2 = 1153419621U;
long long int var_5 = -3309003731248883257LL;
long long int var_7 = 8502124362107178259LL;
long long int var_9 = 6412827438266902487LL;
unsigned int var_12 = 775430969U;
signed char var_13 = (signed char)-23;
int zero = 0;
signed char var_14 = (signed char)-116;
unsigned int var_15 = 3516342798U;
unsigned int var_16 = 2607592566U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
