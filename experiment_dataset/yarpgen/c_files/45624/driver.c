#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3891025910933091937LL;
unsigned short var_4 = (unsigned short)48269;
unsigned short var_6 = (unsigned short)24238;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 3813683794U;
int zero = 0;
unsigned char var_13 = (unsigned char)38;
signed char var_14 = (signed char)16;
short var_15 = (short)-5269;
void init() {
}

void checksum() {
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
