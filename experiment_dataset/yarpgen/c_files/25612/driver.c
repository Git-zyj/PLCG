#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15272388843618343386ULL;
signed char var_7 = (signed char)-33;
short var_8 = (short)21738;
unsigned short var_10 = (unsigned short)31393;
unsigned long long int var_12 = 11556308331140437929ULL;
unsigned char var_16 = (unsigned char)75;
short var_17 = (short)28061;
int zero = 0;
long long int var_19 = -5977730159208029552LL;
unsigned short var_20 = (unsigned short)62829;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
