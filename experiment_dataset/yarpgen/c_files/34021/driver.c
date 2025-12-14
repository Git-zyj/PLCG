#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6630155719045532762LL;
unsigned short var_9 = (unsigned short)31423;
signed char var_10 = (signed char)33;
signed char var_11 = (signed char)1;
int var_13 = -862922863;
long long int var_15 = 5792587983696125170LL;
short var_16 = (short)-19575;
signed char var_18 = (signed char)-19;
int zero = 0;
int var_19 = 103698269;
short var_20 = (short)3244;
unsigned int var_21 = 2178686654U;
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
