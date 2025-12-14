#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-50;
signed char var_4 = (signed char)-94;
int var_5 = -236341571;
unsigned short var_10 = (unsigned short)13432;
unsigned short var_17 = (unsigned short)28983;
int zero = 0;
unsigned short var_18 = (unsigned short)184;
unsigned short var_19 = (unsigned short)22578;
unsigned short var_20 = (unsigned short)65188;
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
