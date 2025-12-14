#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34569;
signed char var_3 = (signed char)-109;
unsigned int var_4 = 3525272269U;
unsigned long long int var_9 = 8445698016049614150ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)197;
unsigned int var_13 = 253782085U;
int var_14 = 412329110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
