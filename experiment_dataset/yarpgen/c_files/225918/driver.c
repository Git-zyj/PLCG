#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)211;
int var_2 = -1375783727;
unsigned char var_3 = (unsigned char)227;
unsigned short var_4 = (unsigned short)14741;
int var_5 = 699401034;
long long int var_6 = -508793182527439165LL;
int var_7 = 2133713051;
signed char var_8 = (signed char)-72;
signed char var_9 = (signed char)36;
int var_10 = -1407434209;
int var_12 = -1683866939;
int zero = 0;
unsigned short var_13 = (unsigned short)63214;
long long int var_14 = -3006618413453286349LL;
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
