#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1065418045;
int var_5 = -1644966830;
unsigned short var_9 = (unsigned short)34732;
int var_11 = -751382662;
unsigned char var_12 = (unsigned char)103;
unsigned short var_14 = (unsigned short)38013;
int zero = 0;
int var_16 = -724538590;
long long int var_17 = -2178547076336828995LL;
int var_18 = 1484831831;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
