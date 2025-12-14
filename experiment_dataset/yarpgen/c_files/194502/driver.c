#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)27539;
unsigned int var_2 = 3955586475U;
signed char var_5 = (signed char)-38;
int var_8 = -1686787086;
int zero = 0;
signed char var_16 = (signed char)72;
unsigned short var_17 = (unsigned short)12163;
int var_18 = -58788298;
long long int var_19 = -6721795785821059265LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
