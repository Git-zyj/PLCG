#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-26722;
unsigned short var_1 = (unsigned short)57442;
unsigned char var_2 = (unsigned char)229;
short var_5 = (short)-188;
unsigned short var_8 = (unsigned short)22330;
short var_14 = (short)14658;
short var_16 = (short)-12667;
int zero = 0;
long long int var_20 = 5847556988137877107LL;
signed char var_21 = (signed char)95;
int var_22 = -1005460362;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
