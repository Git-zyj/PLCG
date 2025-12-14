#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 7293777819471706820ULL;
unsigned char var_15 = (unsigned char)217;
unsigned int var_16 = 3489988279U;
unsigned int var_18 = 472283411U;
signed char var_19 = (signed char)-88;
int zero = 0;
unsigned short var_20 = (unsigned short)2253;
long long int var_21 = 2397553096422761489LL;
signed char var_22 = (signed char)47;
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
