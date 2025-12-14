#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -755660414;
short var_3 = (short)-12860;
_Bool var_7 = (_Bool)0;
unsigned long long int var_11 = 15513042483467890458ULL;
unsigned char var_12 = (unsigned char)85;
int zero = 0;
unsigned short var_17 = (unsigned short)696;
unsigned char var_18 = (unsigned char)24;
unsigned char var_19 = (unsigned char)236;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
