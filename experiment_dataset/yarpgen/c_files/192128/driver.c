#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15007152464927248518ULL;
signed char var_1 = (signed char)-61;
unsigned int var_2 = 1612720378U;
short var_3 = (short)8691;
signed char var_6 = (signed char)-37;
short var_9 = (short)-26633;
int zero = 0;
unsigned short var_19 = (unsigned short)2111;
unsigned char var_20 = (unsigned char)92;
void init() {
}

void checksum() {
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
