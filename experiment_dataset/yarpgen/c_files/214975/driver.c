#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27633;
int var_1 = -1367313148;
int var_2 = -696663776;
unsigned short var_3 = (unsigned short)64968;
unsigned short var_4 = (unsigned short)55547;
short var_5 = (short)-3953;
short var_9 = (short)-7962;
int zero = 0;
short var_12 = (short)-3876;
unsigned short var_13 = (unsigned short)24432;
signed char var_14 = (signed char)68;
unsigned char var_15 = (unsigned char)215;
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
