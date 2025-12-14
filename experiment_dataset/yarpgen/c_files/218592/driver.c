#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_11 = (unsigned short)48373;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)22;
int var_17 = 1295299366;
int zero = 0;
signed char var_19 = (signed char)99;
long long int var_20 = -528395176011125202LL;
unsigned char var_21 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
