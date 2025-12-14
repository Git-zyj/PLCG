#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3098353996731043845LL;
long long int var_4 = -7488718620380300378LL;
unsigned short var_5 = (unsigned short)41177;
int var_6 = -303836391;
unsigned char var_7 = (unsigned char)203;
long long int var_8 = -2576055403692155717LL;
long long int var_15 = 2924379815194451540LL;
unsigned short var_16 = (unsigned short)48941;
unsigned short var_18 = (unsigned short)29379;
int zero = 0;
unsigned short var_19 = (unsigned short)3212;
unsigned short var_20 = (unsigned short)38211;
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
