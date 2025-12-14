#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -417418232;
unsigned char var_5 = (unsigned char)224;
unsigned long long int var_6 = 8106083110964924957ULL;
signed char var_7 = (signed char)-64;
int var_8 = -469119057;
int var_9 = -1936178324;
signed char var_10 = (signed char)33;
int var_11 = -202854367;
int zero = 0;
int var_13 = -2102647002;
unsigned char var_14 = (unsigned char)232;
void init() {
}

void checksum() {
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
