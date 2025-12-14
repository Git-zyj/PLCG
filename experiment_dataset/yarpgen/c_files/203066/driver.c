#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1212573130;
unsigned long long int var_2 = 18266280367163982991ULL;
unsigned short var_4 = (unsigned short)7890;
unsigned char var_5 = (unsigned char)22;
int zero = 0;
unsigned long long int var_15 = 5948302046135450040ULL;
unsigned long long int var_16 = 18320706456073351752ULL;
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
