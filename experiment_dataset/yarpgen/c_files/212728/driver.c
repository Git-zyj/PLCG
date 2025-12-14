#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8600;
unsigned char var_1 = (unsigned char)171;
unsigned long long int var_8 = 8451690647746213622ULL;
unsigned char var_12 = (unsigned char)177;
int zero = 0;
unsigned short var_18 = (unsigned short)17643;
unsigned long long int var_19 = 12926918264061365059ULL;
unsigned long long int var_20 = 2244281060939379586ULL;
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
