#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)49887;
unsigned int var_4 = 3334475897U;
unsigned char var_5 = (unsigned char)94;
signed char var_7 = (signed char)-33;
unsigned long long int var_8 = 10158153996113723953ULL;
unsigned char var_9 = (unsigned char)251;
signed char var_10 = (signed char)56;
int zero = 0;
unsigned char var_11 = (unsigned char)4;
int var_12 = 1388187411;
void init() {
}

void checksum() {
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
