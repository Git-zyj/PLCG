#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12819;
unsigned long long int var_2 = 7872116061608543774ULL;
unsigned short var_3 = (unsigned short)9139;
unsigned short var_8 = (unsigned short)64638;
unsigned long long int var_9 = 2666355426903886933ULL;
unsigned long long int var_10 = 705991127289062429ULL;
signed char var_12 = (signed char)-75;
unsigned long long int var_16 = 11823696182828199080ULL;
unsigned char var_17 = (unsigned char)153;
short var_18 = (short)-30342;
int zero = 0;
short var_19 = (short)31930;
unsigned char var_20 = (unsigned char)210;
unsigned short var_21 = (unsigned short)46701;
unsigned long long int var_22 = 2001580807121532931ULL;
unsigned long long int var_23 = 5832423001996183994ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
