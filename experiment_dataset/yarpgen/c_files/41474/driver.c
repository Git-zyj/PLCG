#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_6 = 3015946757U;
signed char var_9 = (signed char)-83;
int var_12 = 2125598002;
unsigned short var_16 = (unsigned short)38179;
int zero = 0;
unsigned long long int var_19 = 5509644120718666619ULL;
unsigned short var_20 = (unsigned short)1690;
unsigned char var_21 = (unsigned char)164;
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
