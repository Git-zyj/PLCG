#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4282972646U;
signed char var_6 = (signed char)-75;
unsigned int var_7 = 1765908433U;
short var_11 = (short)-18691;
int zero = 0;
unsigned char var_12 = (unsigned char)140;
unsigned int var_13 = 772878512U;
unsigned int var_14 = 635821448U;
short var_15 = (short)-13049;
unsigned int var_16 = 1568653777U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
