#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3132333130459356867ULL;
unsigned char var_5 = (unsigned char)203;
signed char var_7 = (signed char)15;
int zero = 0;
unsigned char var_11 = (unsigned char)213;
unsigned short var_12 = (unsigned short)6964;
unsigned long long int var_13 = 5706352931047454596ULL;
void init() {
}

void checksum() {
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
