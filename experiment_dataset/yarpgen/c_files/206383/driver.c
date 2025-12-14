#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47884;
int var_4 = 1200022951;
unsigned short var_10 = (unsigned short)35303;
short var_11 = (short)31985;
unsigned short var_13 = (unsigned short)36673;
int zero = 0;
unsigned short var_18 = (unsigned short)57031;
unsigned short var_19 = (unsigned short)15715;
unsigned short var_20 = (unsigned short)14999;
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
