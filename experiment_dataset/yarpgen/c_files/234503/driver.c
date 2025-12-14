#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1509809955;
unsigned long long int var_2 = 11371948853640501365ULL;
unsigned char var_3 = (unsigned char)180;
int var_4 = 1063250061;
unsigned long long int var_8 = 2969151395281162048ULL;
unsigned char var_9 = (unsigned char)170;
int zero = 0;
unsigned short var_10 = (unsigned short)11377;
unsigned short var_11 = (unsigned short)12339;
unsigned short var_12 = (unsigned short)3030;
int var_13 = -1845785738;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
