#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1061102091;
unsigned int var_2 = 425247764U;
int var_5 = 25829639;
int var_14 = -656612237;
signed char var_15 = (signed char)-105;
signed char var_19 = (signed char)-122;
int zero = 0;
int var_20 = -416683910;
unsigned short var_21 = (unsigned short)65151;
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
