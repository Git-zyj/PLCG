#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-72;
signed char var_9 = (signed char)-123;
unsigned char var_10 = (unsigned char)54;
unsigned short var_15 = (unsigned short)15984;
unsigned long long int var_17 = 8715473265173738982ULL;
int zero = 0;
signed char var_18 = (signed char)23;
unsigned char var_19 = (unsigned char)146;
unsigned long long int var_20 = 16037324661014349195ULL;
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
