#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1020386325U;
int var_2 = 1900212698;
unsigned int var_6 = 702791733U;
unsigned long long int var_9 = 18016597142725219002ULL;
unsigned char var_10 = (unsigned char)162;
signed char var_12 = (signed char)113;
unsigned long long int var_13 = 7868744205814311122ULL;
int zero = 0;
short var_14 = (short)29002;
unsigned long long int var_15 = 9196686907205210827ULL;
unsigned char var_16 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
