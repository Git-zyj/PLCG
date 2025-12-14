#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)80;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)208;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned char var_7 = (unsigned char)9;
_Bool var_9 = (_Bool)0;
int zero = 0;
unsigned char var_10 = (unsigned char)200;
unsigned char var_11 = (unsigned char)153;
int var_12 = -992456761;
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
