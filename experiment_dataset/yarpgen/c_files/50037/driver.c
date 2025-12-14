#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1283449467;
unsigned short var_5 = (unsigned short)5906;
unsigned short var_9 = (unsigned short)7408;
signed char var_13 = (signed char)-99;
int zero = 0;
unsigned long long int var_14 = 16080117806098030333ULL;
short var_15 = (short)15261;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
