#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)185;
unsigned int var_3 = 3309673934U;
unsigned int var_5 = 3787424698U;
unsigned long long int var_6 = 9692760412474068275ULL;
int var_7 = 91759406;
short var_10 = (short)-28871;
int zero = 0;
signed char var_13 = (signed char)-118;
unsigned long long int var_14 = 17197126646554574396ULL;
unsigned int var_15 = 423501998U;
short var_16 = (short)-26409;
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
