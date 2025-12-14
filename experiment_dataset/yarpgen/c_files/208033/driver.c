#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-3403;
unsigned int var_5 = 3759885020U;
unsigned short var_7 = (unsigned short)46590;
unsigned long long int var_12 = 14274290562608025459ULL;
unsigned short var_17 = (unsigned short)15900;
int zero = 0;
unsigned int var_18 = 3813239793U;
unsigned int var_19 = 4071187639U;
unsigned short var_20 = (unsigned short)17034;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
