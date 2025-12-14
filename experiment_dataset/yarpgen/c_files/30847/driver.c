#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-58;
unsigned short var_3 = (unsigned short)36720;
unsigned char var_4 = (unsigned char)101;
int var_5 = -1432275083;
unsigned int var_6 = 1284083004U;
int var_11 = 1113328156;
int var_12 = 1076815617;
unsigned char var_13 = (unsigned char)166;
unsigned char var_15 = (unsigned char)107;
int zero = 0;
unsigned short var_16 = (unsigned short)40280;
int var_17 = -372808880;
unsigned int var_18 = 602640563U;
unsigned char var_19 = (unsigned char)91;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
