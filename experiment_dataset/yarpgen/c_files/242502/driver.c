#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6866998669185084011ULL;
unsigned char var_1 = (unsigned char)0;
long long int var_3 = 8699073136274201267LL;
unsigned long long int var_4 = 13885799328327441631ULL;
int var_6 = -1650308537;
unsigned char var_8 = (unsigned char)233;
short var_9 = (short)25588;
int var_11 = 171386807;
int zero = 0;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)97;
unsigned char var_14 = (unsigned char)187;
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
