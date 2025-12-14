#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2225814500U;
unsigned long long int var_1 = 14106674824320647575ULL;
unsigned char var_3 = (unsigned char)72;
signed char var_6 = (signed char)-12;
unsigned char var_10 = (unsigned char)85;
signed char var_13 = (signed char)-108;
unsigned long long int var_14 = 684231879345418273ULL;
unsigned char var_15 = (unsigned char)217;
unsigned short var_16 = (unsigned short)22400;
int zero = 0;
unsigned short var_19 = (unsigned short)8856;
short var_20 = (short)22032;
signed char var_21 = (signed char)32;
signed char var_22 = (signed char)34;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
