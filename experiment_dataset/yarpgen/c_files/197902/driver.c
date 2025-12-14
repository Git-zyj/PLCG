#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)136;
short var_1 = (short)-20486;
unsigned long long int var_3 = 14471331418035386474ULL;
unsigned char var_4 = (unsigned char)25;
unsigned short var_5 = (unsigned short)43882;
unsigned char var_8 = (unsigned char)164;
signed char var_9 = (signed char)43;
signed char var_10 = (signed char)-72;
int zero = 0;
signed char var_11 = (signed char)8;
signed char var_12 = (signed char)90;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
