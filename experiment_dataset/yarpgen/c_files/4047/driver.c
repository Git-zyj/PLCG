#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44600;
unsigned char var_1 = (unsigned char)4;
unsigned long long int var_8 = 7434754306327483988ULL;
unsigned int var_10 = 4070266567U;
int zero = 0;
unsigned short var_18 = (unsigned short)52166;
unsigned int var_19 = 1518806320U;
unsigned short var_20 = (unsigned short)41207;
int var_21 = -2132236367;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
