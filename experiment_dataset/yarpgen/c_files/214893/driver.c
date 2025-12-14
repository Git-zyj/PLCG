#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)64524;
unsigned short var_3 = (unsigned short)37233;
int var_6 = -1685829524;
unsigned char var_7 = (unsigned char)188;
unsigned short var_9 = (unsigned short)4918;
unsigned char var_10 = (unsigned char)167;
unsigned char var_13 = (unsigned char)62;
int zero = 0;
long long int var_15 = -163165948523625735LL;
unsigned int var_16 = 2965912495U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
