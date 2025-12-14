#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)13494;
unsigned short var_8 = (unsigned short)62412;
unsigned short var_9 = (unsigned short)28814;
unsigned long long int var_11 = 2990999302554743313ULL;
signed char var_17 = (signed char)-70;
int zero = 0;
unsigned long long int var_20 = 1974410882268700122ULL;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
