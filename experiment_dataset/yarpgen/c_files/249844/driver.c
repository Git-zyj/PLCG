#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48453;
int var_3 = 1142559338;
unsigned long long int var_4 = 18092834613977442881ULL;
unsigned long long int var_6 = 4438704732247301604ULL;
unsigned long long int var_8 = 15839828180977126839ULL;
int zero = 0;
unsigned long long int var_13 = 8617209906213286694ULL;
unsigned long long int var_14 = 6041194249567150632ULL;
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
