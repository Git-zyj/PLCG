#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)61;
int var_2 = 1122162412;
unsigned char var_3 = (unsigned char)120;
unsigned char var_6 = (unsigned char)6;
unsigned char var_7 = (unsigned char)24;
short var_8 = (short)19561;
signed char var_9 = (signed char)50;
unsigned char var_10 = (unsigned char)180;
int zero = 0;
unsigned short var_12 = (unsigned short)32092;
int var_13 = -2086876720;
short var_14 = (short)25856;
short var_15 = (short)19067;
int var_16 = 789646034;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
