#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3503326630U;
int var_2 = 1109469876;
unsigned short var_3 = (unsigned short)21191;
signed char var_6 = (signed char)-21;
int var_9 = -1283094205;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
unsigned short var_12 = (unsigned short)36248;
unsigned char var_13 = (unsigned char)244;
unsigned char var_14 = (unsigned char)218;
unsigned long long int var_15 = 5403514036862132769ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
