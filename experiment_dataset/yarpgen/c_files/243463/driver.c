#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)137;
unsigned char var_6 = (unsigned char)216;
signed char var_9 = (signed char)-114;
unsigned long long int var_12 = 1870943726352355574ULL;
unsigned short var_16 = (unsigned short)49924;
int zero = 0;
signed char var_17 = (signed char)-91;
unsigned char var_18 = (unsigned char)162;
unsigned short var_19 = (unsigned short)28059;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
