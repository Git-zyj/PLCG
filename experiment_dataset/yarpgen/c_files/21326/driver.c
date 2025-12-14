#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
unsigned char var_5 = (unsigned char)92;
unsigned short var_6 = (unsigned short)64979;
int var_7 = 1801779828;
unsigned long long int var_11 = 15832677360321927871ULL;
unsigned long long int var_13 = 11437099624558286420ULL;
int var_14 = -28724336;
int zero = 0;
unsigned char var_17 = (unsigned char)149;
unsigned short var_18 = (unsigned short)4676;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
