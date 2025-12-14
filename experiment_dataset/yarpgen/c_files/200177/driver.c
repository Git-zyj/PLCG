#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)193;
unsigned int var_5 = 4020582097U;
unsigned int var_6 = 2230162147U;
short var_9 = (short)24289;
unsigned int var_10 = 3934835903U;
signed char var_11 = (signed char)-51;
unsigned short var_12 = (unsigned short)12813;
int zero = 0;
unsigned int var_14 = 89379639U;
int var_15 = 1209513649;
void init() {
}

void checksum() {
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
