#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-35;
unsigned short var_8 = (unsigned short)53021;
short var_9 = (short)8983;
unsigned int var_15 = 2288694074U;
unsigned char var_17 = (unsigned char)166;
int zero = 0;
signed char var_18 = (signed char)-16;
int var_19 = 342350317;
short var_20 = (short)18390;
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
