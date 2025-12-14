#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)13157;
unsigned long long int var_2 = 16448854764096168329ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)18860;
unsigned char var_8 = (unsigned char)233;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_10 = (signed char)92;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 17214597936618111681ULL;
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
