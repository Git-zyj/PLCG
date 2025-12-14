#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-106;
signed char var_5 = (signed char)125;
signed char var_6 = (signed char)88;
unsigned int var_7 = 4272483562U;
unsigned char var_9 = (unsigned char)192;
int zero = 0;
unsigned int var_10 = 2820663299U;
unsigned short var_11 = (unsigned short)29915;
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
