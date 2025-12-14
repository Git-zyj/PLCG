#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12640;
unsigned char var_9 = (unsigned char)106;
int zero = 0;
signed char var_10 = (signed char)86;
long long int var_11 = -5864361868242601970LL;
signed char var_12 = (signed char)-8;
unsigned int var_13 = 185793278U;
unsigned short var_14 = (unsigned short)35463;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
