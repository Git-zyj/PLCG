#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9485270147296350427ULL;
unsigned int var_3 = 3294457887U;
unsigned char var_4 = (unsigned char)27;
int var_9 = -676441427;
unsigned long long int var_10 = 10247371931032210796ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)181;
unsigned long long int var_21 = 14299469308509651665ULL;
unsigned short var_22 = (unsigned short)21274;
signed char var_23 = (signed char)-98;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
