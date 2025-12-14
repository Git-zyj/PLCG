#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-644;
long long int var_8 = 2597404235070914731LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_10 = 3798263958477766696LL;
unsigned short var_11 = (unsigned short)39009;
_Bool var_12 = (_Bool)1;
int var_13 = 1889196254;
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
