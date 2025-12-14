#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3358289308U;
unsigned long long int var_4 = 6147920173925366075ULL;
unsigned long long int var_5 = 4124660069106637826ULL;
unsigned char var_7 = (unsigned char)58;
unsigned int var_10 = 3847147714U;
unsigned long long int var_17 = 14282839036870978253ULL;
unsigned short var_19 = (unsigned short)10320;
int zero = 0;
unsigned short var_20 = (unsigned short)18182;
long long int var_21 = 6459645310024287501LL;
short var_22 = (short)19933;
unsigned char var_23 = (unsigned char)12;
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
