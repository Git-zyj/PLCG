#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)57;
_Bool var_3 = (_Bool)1;
short var_9 = (short)11136;
unsigned char var_13 = (unsigned char)153;
int zero = 0;
int var_14 = 591651368;
short var_15 = (short)-23939;
long long int var_16 = -2915214675032787478LL;
unsigned long long int var_17 = 8903756874493769714ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
