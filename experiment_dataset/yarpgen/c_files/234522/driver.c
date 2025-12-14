#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)161;
long long int var_7 = -8961119196831096624LL;
short var_9 = (short)16256;
unsigned char var_13 = (unsigned char)13;
unsigned int var_15 = 2863203959U;
int zero = 0;
short var_17 = (short)-24122;
short var_18 = (short)25830;
long long int var_19 = 2160806671398782569LL;
unsigned int var_20 = 880895044U;
unsigned char var_21 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
