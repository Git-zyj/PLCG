#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1725204333;
signed char var_2 = (signed char)-48;
long long int var_4 = 8603628837636480054LL;
unsigned char var_6 = (unsigned char)8;
signed char var_7 = (signed char)-66;
unsigned char var_8 = (unsigned char)140;
unsigned char var_9 = (unsigned char)173;
int zero = 0;
long long int var_10 = 7279820632042079283LL;
int var_11 = 769556892;
unsigned int var_12 = 1765038890U;
short var_13 = (short)14055;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
