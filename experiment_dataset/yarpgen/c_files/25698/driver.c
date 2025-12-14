#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1751745368;
signed char var_5 = (signed char)-120;
unsigned short var_12 = (unsigned short)26889;
int zero = 0;
unsigned char var_17 = (unsigned char)219;
unsigned short var_18 = (unsigned short)63438;
int var_19 = -1469606439;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
