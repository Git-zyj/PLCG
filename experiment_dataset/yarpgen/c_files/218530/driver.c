#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3929367238U;
unsigned long long int var_2 = 846474774151490296ULL;
unsigned long long int var_4 = 11591500169450867348ULL;
unsigned char var_5 = (unsigned char)61;
signed char var_6 = (signed char)-118;
unsigned int var_7 = 2057681357U;
short var_8 = (short)-8491;
unsigned short var_9 = (unsigned short)56466;
unsigned short var_10 = (unsigned short)29378;
int zero = 0;
unsigned int var_11 = 4198002060U;
unsigned char var_12 = (unsigned char)17;
long long int var_13 = -5258381855094694155LL;
unsigned char var_14 = (unsigned char)40;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
