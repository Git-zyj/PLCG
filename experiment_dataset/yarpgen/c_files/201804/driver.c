#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)39947;
unsigned short var_2 = (unsigned short)54332;
short var_3 = (short)-18387;
unsigned char var_4 = (unsigned char)207;
unsigned short var_5 = (unsigned short)37545;
unsigned char var_6 = (unsigned char)230;
short var_8 = (short)-23900;
_Bool var_9 = (_Bool)1;
int var_11 = 722803968;
int zero = 0;
unsigned long long int var_12 = 6510653447814379965ULL;
unsigned char var_13 = (unsigned char)242;
short var_14 = (short)-24539;
unsigned char var_15 = (unsigned char)246;
void init() {
}

void checksum() {
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
