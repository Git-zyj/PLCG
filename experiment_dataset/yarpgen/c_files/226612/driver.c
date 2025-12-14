#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)30415;
short var_3 = (short)-9770;
unsigned int var_4 = 589540324U;
int var_5 = -519300933;
int var_6 = 1763049393;
int var_7 = 1418365618;
unsigned int var_12 = 1467597490U;
int zero = 0;
unsigned char var_13 = (unsigned char)89;
unsigned short var_14 = (unsigned short)40774;
int var_15 = -2105272791;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
