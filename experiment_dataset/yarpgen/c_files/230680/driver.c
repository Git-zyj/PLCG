#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2597569105U;
unsigned short var_3 = (unsigned short)3422;
unsigned short var_7 = (unsigned short)29803;
unsigned int var_8 = 2067474905U;
unsigned long long int var_9 = 11739404818789354455ULL;
signed char var_11 = (signed char)-72;
int zero = 0;
unsigned long long int var_12 = 9260327984037384091ULL;
signed char var_13 = (signed char)-114;
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
