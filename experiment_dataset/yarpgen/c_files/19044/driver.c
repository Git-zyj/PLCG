#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
unsigned short var_1 = (unsigned short)31509;
unsigned int var_2 = 3591245554U;
int var_3 = -52152415;
signed char var_7 = (signed char)-52;
unsigned short var_9 = (unsigned short)23038;
unsigned int var_10 = 1374915619U;
unsigned int var_11 = 3061912655U;
signed char var_12 = (signed char)-60;
unsigned int var_13 = 13113106U;
unsigned int var_14 = 854433738U;
int zero = 0;
unsigned short var_16 = (unsigned short)33990;
int var_17 = -144400207;
signed char var_18 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
