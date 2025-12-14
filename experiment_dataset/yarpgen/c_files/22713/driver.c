#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)10910;
int var_8 = 568982609;
int var_10 = -1203108581;
unsigned long long int var_11 = 17583933232579683197ULL;
unsigned int var_14 = 3611568108U;
unsigned short var_16 = (unsigned short)52000;
unsigned long long int var_18 = 9314812888279657131ULL;
int zero = 0;
unsigned long long int var_19 = 12732176120465506822ULL;
unsigned char var_20 = (unsigned char)104;
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
