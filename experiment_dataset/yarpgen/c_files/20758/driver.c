#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)109;
unsigned int var_4 = 1033164877U;
short var_6 = (short)28855;
int var_7 = 1291557986;
unsigned int var_8 = 1517903782U;
long long int var_9 = 477712453999295330LL;
int zero = 0;
signed char var_10 = (signed char)-81;
signed char var_11 = (signed char)111;
int var_12 = -1534673362;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
