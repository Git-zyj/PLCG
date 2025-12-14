#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-16618;
int var_4 = 2055186035;
int var_5 = 362076035;
unsigned long long int var_6 = 4851312737282667276ULL;
unsigned long long int var_9 = 12252908918803107042ULL;
int zero = 0;
signed char var_12 = (signed char)71;
unsigned short var_13 = (unsigned short)33893;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
