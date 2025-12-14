#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)20622;
int var_7 = 1457574335;
short var_8 = (short)27748;
short var_9 = (short)16749;
unsigned short var_10 = (unsigned short)5899;
int var_11 = 1186007283;
signed char var_13 = (signed char)-11;
int zero = 0;
unsigned char var_14 = (unsigned char)39;
unsigned char var_15 = (unsigned char)59;
unsigned short var_16 = (unsigned short)62837;
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
