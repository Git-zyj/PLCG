#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)5103;
long long int var_8 = -5969903865965597165LL;
int var_9 = -129910928;
unsigned long long int var_18 = 12906574885416640693ULL;
int zero = 0;
short var_20 = (short)-12315;
unsigned long long int var_21 = 1673674449246678817ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
