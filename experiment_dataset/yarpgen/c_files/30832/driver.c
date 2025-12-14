#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)217;
signed char var_4 = (signed char)65;
unsigned short var_5 = (unsigned short)35364;
short var_6 = (short)-23149;
long long int var_7 = 7533868457753635946LL;
unsigned long long int var_8 = 929227601414149303ULL;
int var_11 = -1795074129;
int zero = 0;
int var_12 = -1995681416;
unsigned short var_13 = (unsigned short)63534;
unsigned int var_14 = 1392059381U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
