#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18701;
int var_2 = -1019289774;
signed char var_3 = (signed char)56;
short var_6 = (short)13951;
signed char var_7 = (signed char)37;
unsigned long long int var_8 = 16489015622299414263ULL;
unsigned char var_9 = (unsigned char)40;
signed char var_10 = (signed char)-54;
short var_11 = (short)-11126;
unsigned short var_13 = (unsigned short)30998;
int zero = 0;
int var_14 = 30973134;
unsigned char var_15 = (unsigned char)191;
unsigned int var_16 = 1878471051U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
