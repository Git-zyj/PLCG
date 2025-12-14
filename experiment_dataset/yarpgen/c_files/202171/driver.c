#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11522148791003594563ULL;
unsigned short var_5 = (unsigned short)56272;
int var_8 = 664097940;
unsigned short var_10 = (unsigned short)40349;
int zero = 0;
signed char var_11 = (signed char)-62;
unsigned short var_12 = (unsigned short)60710;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
