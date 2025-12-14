#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)42;
unsigned short var_2 = (unsigned short)56942;
unsigned short var_5 = (unsigned short)46486;
unsigned int var_8 = 3802685230U;
int var_9 = 267125534;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 15137217601822867467ULL;
unsigned int var_12 = 3881257008U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
