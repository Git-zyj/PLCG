#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18801;
unsigned long long int var_4 = 1184002097577114688ULL;
signed char var_5 = (signed char)62;
int var_6 = -1862432864;
short var_12 = (short)1603;
unsigned short var_16 = (unsigned short)57668;
unsigned short var_18 = (unsigned short)31571;
int zero = 0;
int var_19 = 1447117043;
unsigned short var_20 = (unsigned short)65366;
unsigned char var_21 = (unsigned char)184;
int var_22 = -164780125;
long long int var_23 = -410090241240674356LL;
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
