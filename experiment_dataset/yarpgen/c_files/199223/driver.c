#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4255385202U;
unsigned char var_5 = (unsigned char)34;
int var_6 = 829788228;
int var_7 = -1479236359;
unsigned char var_11 = (unsigned char)98;
int zero = 0;
unsigned long long int var_12 = 318932921659029755ULL;
int var_13 = -485299699;
void init() {
}

void checksum() {
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
