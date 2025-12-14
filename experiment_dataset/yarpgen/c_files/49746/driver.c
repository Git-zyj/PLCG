#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 804183520;
unsigned char var_5 = (unsigned char)190;
unsigned char var_6 = (unsigned char)151;
unsigned int var_7 = 3788112788U;
signed char var_9 = (signed char)-115;
int zero = 0;
unsigned char var_10 = (unsigned char)229;
unsigned long long int var_11 = 12239898294287715675ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
