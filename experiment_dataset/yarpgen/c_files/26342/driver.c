#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1661767011;
short var_4 = (short)26396;
unsigned long long int var_6 = 12885304388520781060ULL;
long long int var_7 = 5629974830860922461LL;
unsigned char var_11 = (unsigned char)196;
short var_16 = (short)-4568;
long long int var_17 = -8882724772396257817LL;
unsigned int var_18 = 597081906U;
unsigned short var_19 = (unsigned short)60861;
int zero = 0;
short var_20 = (short)11429;
long long int var_21 = 6163149072154254646LL;
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
