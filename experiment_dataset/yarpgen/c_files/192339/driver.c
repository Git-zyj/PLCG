#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4805420946635639672ULL;
signed char var_2 = (signed char)10;
unsigned char var_4 = (unsigned char)107;
unsigned char var_7 = (unsigned char)86;
signed char var_12 = (signed char)22;
unsigned long long int var_14 = 3682534054894753260ULL;
short var_16 = (short)-27758;
unsigned short var_17 = (unsigned short)29370;
unsigned int var_18 = 1270460688U;
int zero = 0;
unsigned char var_19 = (unsigned char)102;
unsigned long long int var_20 = 13055738189759972460ULL;
signed char var_21 = (signed char)-12;
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
