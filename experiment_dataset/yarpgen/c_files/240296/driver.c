#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12864633255229297970ULL;
unsigned char var_3 = (unsigned char)198;
signed char var_4 = (signed char)27;
unsigned char var_11 = (unsigned char)137;
int var_12 = -1392690383;
signed char var_14 = (signed char)113;
unsigned char var_16 = (unsigned char)113;
unsigned int var_17 = 3617019549U;
unsigned char var_18 = (unsigned char)219;
int zero = 0;
int var_20 = 1340338620;
signed char var_21 = (signed char)-114;
signed char var_22 = (signed char)-4;
unsigned short var_23 = (unsigned short)40656;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
