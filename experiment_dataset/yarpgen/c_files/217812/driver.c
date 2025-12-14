#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 622393007;
unsigned char var_5 = (unsigned char)203;
long long int var_9 = -7254905256132555471LL;
int var_11 = -1803798453;
unsigned int var_12 = 3270356560U;
short var_13 = (short)-20885;
unsigned char var_15 = (unsigned char)12;
int zero = 0;
signed char var_17 = (signed char)-80;
unsigned int var_18 = 2049166830U;
signed char var_19 = (signed char)-18;
short var_20 = (short)6034;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
