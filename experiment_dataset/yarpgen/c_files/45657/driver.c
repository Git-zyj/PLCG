#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-93;
unsigned short var_5 = (unsigned short)24700;
unsigned long long int var_6 = 7300801313787610780ULL;
int var_7 = 320280515;
short var_8 = (short)-9522;
unsigned char var_11 = (unsigned char)160;
signed char var_14 = (signed char)-85;
unsigned long long int var_17 = 11961173797307455865ULL;
int zero = 0;
signed char var_19 = (signed char)98;
unsigned short var_20 = (unsigned short)735;
unsigned short var_21 = (unsigned short)38357;
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
