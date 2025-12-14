#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-112;
unsigned short var_2 = (unsigned short)60335;
int var_8 = -33999168;
int var_11 = 512695981;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned int var_13 = 2917370074U;
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
