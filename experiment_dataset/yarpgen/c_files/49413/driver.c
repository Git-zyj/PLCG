#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 204817209;
unsigned short var_9 = (unsigned short)36226;
int zero = 0;
short var_10 = (short)17775;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)22071;
int var_13 = 52612390;
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
