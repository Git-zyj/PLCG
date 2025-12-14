#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)213;
signed char var_9 = (signed char)28;
unsigned long long int var_10 = 1791338122124028221ULL;
unsigned char var_15 = (unsigned char)169;
short var_17 = (short)-27224;
int zero = 0;
unsigned int var_18 = 3245339031U;
short var_19 = (short)-19106;
unsigned char var_20 = (unsigned char)67;
unsigned long long int var_21 = 9579414233658471459ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
