#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-18861;
unsigned long long int var_1 = 15922118812533239733ULL;
signed char var_5 = (signed char)-26;
unsigned long long int var_6 = 10773028473795728029ULL;
unsigned int var_7 = 3248421354U;
unsigned short var_9 = (unsigned short)37382;
signed char var_10 = (signed char)41;
int zero = 0;
unsigned char var_12 = (unsigned char)236;
unsigned char var_13 = (unsigned char)147;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
