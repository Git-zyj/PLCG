#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 9815924748161002482ULL;
short var_8 = (short)4436;
signed char var_9 = (signed char)-28;
int zero = 0;
short var_10 = (short)27152;
unsigned char var_11 = (unsigned char)7;
int var_12 = 158329793;
unsigned short var_13 = (unsigned short)13813;
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
