#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)242;
unsigned char var_1 = (unsigned char)22;
signed char var_2 = (signed char)-80;
long long int var_3 = -9183480845160421058LL;
unsigned short var_6 = (unsigned short)50129;
long long int var_8 = -4430863087185123900LL;
long long int var_9 = -4600449817654671015LL;
long long int var_10 = 2016055078495024156LL;
signed char var_11 = (signed char)34;
int zero = 0;
long long int var_12 = 6426587097843958225LL;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2612382161878960741LL;
int var_15 = 627989715;
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
