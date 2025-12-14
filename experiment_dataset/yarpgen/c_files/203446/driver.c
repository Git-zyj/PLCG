#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 674676879U;
short var_2 = (short)-16980;
int var_3 = 673718099;
unsigned char var_5 = (unsigned char)210;
unsigned char var_6 = (unsigned char)213;
unsigned char var_7 = (unsigned char)89;
int var_8 = -974049679;
int var_9 = 1895679734;
int var_10 = 2032346391;
unsigned long long int var_12 = 10864034254631306462ULL;
int zero = 0;
long long int var_13 = -8346291142476817976LL;
int var_14 = 1027326336;
unsigned int var_15 = 4148887848U;
long long int var_16 = -3874268223817423514LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
