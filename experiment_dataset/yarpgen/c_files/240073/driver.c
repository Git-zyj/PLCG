#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3235786677U;
unsigned int var_4 = 484086101U;
long long int var_5 = -3337112989006612601LL;
signed char var_6 = (signed char)70;
unsigned short var_7 = (unsigned short)9403;
int var_8 = -1106976903;
long long int var_9 = 8992706886478247211LL;
unsigned int var_11 = 179898441U;
int zero = 0;
int var_12 = 1724154199;
unsigned long long int var_13 = 2472518777083964950ULL;
unsigned char var_14 = (unsigned char)197;
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
