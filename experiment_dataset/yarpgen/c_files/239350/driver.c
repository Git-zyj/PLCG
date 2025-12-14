#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-25926;
unsigned char var_4 = (unsigned char)151;
unsigned int var_7 = 3269696434U;
signed char var_12 = (signed char)98;
int zero = 0;
unsigned char var_20 = (unsigned char)160;
unsigned int var_21 = 527239596U;
signed char var_22 = (signed char)-47;
int var_23 = 331527;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
