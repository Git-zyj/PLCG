#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3666418733U;
unsigned char var_2 = (unsigned char)45;
unsigned char var_3 = (unsigned char)195;
unsigned int var_4 = 2165392663U;
short var_6 = (short)3688;
unsigned char var_9 = (unsigned char)49;
unsigned char var_14 = (unsigned char)159;
unsigned long long int var_17 = 13548540647775236866ULL;
int zero = 0;
unsigned long long int var_18 = 6747902153431127548ULL;
signed char var_19 = (signed char)-41;
unsigned int var_20 = 3163913083U;
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
