#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3890682215U;
unsigned int var_2 = 46367368U;
unsigned short var_3 = (unsigned short)29101;
short var_4 = (short)10707;
_Bool var_8 = (_Bool)1;
int var_9 = 233590861;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_11 = (unsigned char)203;
unsigned long long int var_12 = 17587398837781552542ULL;
unsigned char var_13 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
