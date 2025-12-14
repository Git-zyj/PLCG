#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)99;
signed char var_3 = (signed char)80;
signed char var_4 = (signed char)-103;
int var_9 = -1525007678;
unsigned short var_10 = (unsigned short)59151;
int zero = 0;
unsigned char var_12 = (unsigned char)219;
unsigned char var_13 = (unsigned char)66;
long long int var_14 = 8425954807392838345LL;
unsigned long long int var_15 = 910469911433366879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
