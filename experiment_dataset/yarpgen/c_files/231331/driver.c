#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -410984680;
unsigned char var_2 = (unsigned char)36;
unsigned char var_3 = (unsigned char)212;
unsigned int var_5 = 2008908845U;
signed char var_6 = (signed char)-42;
signed char var_8 = (signed char)21;
int var_9 = 1816785486;
unsigned int var_10 = 498386704U;
int var_11 = -2054805387;
short var_13 = (short)21046;
int zero = 0;
signed char var_18 = (signed char)-21;
signed char var_19 = (signed char)-49;
signed char var_20 = (signed char)22;
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
