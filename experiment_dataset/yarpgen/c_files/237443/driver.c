#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40534;
signed char var_13 = (signed char)-17;
unsigned int var_18 = 341421571U;
unsigned char var_19 = (unsigned char)125;
int zero = 0;
signed char var_20 = (signed char)-62;
short var_21 = (short)17059;
void init() {
}

void checksum() {
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
