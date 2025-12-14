#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-97;
unsigned long long int var_5 = 1095183119359712803ULL;
int var_12 = -1581582580;
unsigned char var_14 = (unsigned char)242;
int zero = 0;
int var_15 = 1388007660;
signed char var_16 = (signed char)-53;
unsigned short var_17 = (unsigned short)19102;
int var_18 = -1620224455;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
