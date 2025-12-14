#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-21055;
long long int var_9 = 7679685511835579760LL;
unsigned char var_10 = (unsigned char)102;
unsigned long long int var_11 = 14473203809505501577ULL;
unsigned char var_12 = (unsigned char)191;
signed char var_14 = (signed char)-7;
unsigned int var_17 = 260087560U;
long long int var_18 = -2766830770009487276LL;
int zero = 0;
unsigned char var_19 = (unsigned char)253;
short var_20 = (short)80;
unsigned short var_21 = (unsigned short)47310;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
