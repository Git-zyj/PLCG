#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)20296;
int var_3 = 297099576;
unsigned long long int var_4 = 16139874094313514539ULL;
int var_5 = -1051521444;
long long int var_7 = -7251258848941778785LL;
unsigned long long int var_9 = 2209104707296010383ULL;
int zero = 0;
unsigned long long int var_11 = 7332902916185646096ULL;
short var_12 = (short)23346;
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
