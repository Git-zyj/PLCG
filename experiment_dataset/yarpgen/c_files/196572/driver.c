#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18019;
unsigned int var_2 = 2625608464U;
signed char var_5 = (signed char)46;
unsigned int var_7 = 3303345258U;
unsigned char var_8 = (unsigned char)45;
unsigned char var_9 = (unsigned char)218;
unsigned short var_11 = (unsigned short)15600;
long long int var_12 = -7243415444110148131LL;
int zero = 0;
int var_15 = -64552704;
int var_16 = 1538285529;
int var_17 = -564695009;
int var_18 = -887389618;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
