#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
short var_2 = (short)-21115;
unsigned short var_8 = (unsigned short)49794;
int var_10 = -1129283784;
unsigned char var_12 = (unsigned char)114;
short var_18 = (short)-12615;
int zero = 0;
long long int var_20 = -413351879551113284LL;
long long int var_21 = -5303236107715275932LL;
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
