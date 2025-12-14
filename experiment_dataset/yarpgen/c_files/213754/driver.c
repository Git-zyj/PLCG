#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_9 = 4523529785703576524LL;
long long int var_15 = -5972611642961425906LL;
unsigned char var_17 = (unsigned char)4;
int zero = 0;
long long int var_20 = -259080566622569209LL;
signed char var_21 = (signed char)8;
_Bool var_22 = (_Bool)1;
int var_23 = -1731652208;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
