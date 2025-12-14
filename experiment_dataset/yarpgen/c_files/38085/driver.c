#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45834;
unsigned long long int var_2 = 17947124897200491239ULL;
short var_5 = (short)-4619;
unsigned short var_9 = (unsigned short)61912;
short var_11 = (short)-32492;
int zero = 0;
long long int var_12 = 696354357851786757LL;
signed char var_13 = (signed char)-97;
unsigned int var_14 = 3583888302U;
signed char var_15 = (signed char)108;
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
