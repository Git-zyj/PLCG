#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)5839;
unsigned long long int var_2 = 9427876811857020563ULL;
unsigned char var_3 = (unsigned char)44;
unsigned short var_4 = (unsigned short)56654;
signed char var_7 = (signed char)62;
unsigned char var_8 = (unsigned char)248;
int var_9 = 657227895;
int zero = 0;
unsigned long long int var_13 = 7517202796044592299ULL;
unsigned short var_14 = (unsigned short)51818;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
