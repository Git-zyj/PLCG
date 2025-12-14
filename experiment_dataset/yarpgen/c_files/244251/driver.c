#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)18463;
unsigned char var_3 = (unsigned char)174;
_Bool var_6 = (_Bool)1;
int zero = 0;
short var_14 = (short)12618;
unsigned long long int var_15 = 16563067025912728668ULL;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)7208;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
