#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12816650919645296774ULL;
unsigned short var_2 = (unsigned short)49547;
unsigned short var_3 = (unsigned short)46674;
unsigned long long int var_4 = 11613082570791133594ULL;
signed char var_6 = (signed char)41;
unsigned char var_10 = (unsigned char)254;
int zero = 0;
unsigned int var_11 = 2039151768U;
unsigned char var_12 = (unsigned char)159;
unsigned char var_13 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
