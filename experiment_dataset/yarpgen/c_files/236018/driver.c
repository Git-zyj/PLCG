#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26337;
unsigned char var_2 = (unsigned char)3;
long long int var_3 = -2798917640677552975LL;
unsigned char var_4 = (unsigned char)92;
unsigned char var_5 = (unsigned char)89;
int var_8 = 616396143;
unsigned short var_9 = (unsigned short)44410;
int zero = 0;
unsigned char var_10 = (unsigned char)217;
int var_11 = -1221930705;
int var_12 = 679501097;
long long int var_13 = -2547481908803792728LL;
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
