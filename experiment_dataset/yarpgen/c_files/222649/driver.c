#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)20415;
long long int var_5 = -3024031908312195739LL;
unsigned char var_7 = (unsigned char)74;
signed char var_9 = (signed char)-33;
int zero = 0;
unsigned int var_14 = 1510980444U;
signed char var_15 = (signed char)-93;
void init() {
}

void checksum() {
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
