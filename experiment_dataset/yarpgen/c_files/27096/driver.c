#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_10 = (short)-27803;
unsigned int var_15 = 2840939005U;
int var_17 = -89820539;
int zero = 0;
int var_18 = -936092385;
unsigned char var_19 = (unsigned char)129;
_Bool var_20 = (_Bool)0;
short var_21 = (short)8703;
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
