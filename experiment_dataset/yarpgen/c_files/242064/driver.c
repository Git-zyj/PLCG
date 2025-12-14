#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)193;
unsigned short var_6 = (unsigned short)15692;
short var_11 = (short)-1512;
int zero = 0;
long long int var_16 = 236535286645654741LL;
unsigned short var_17 = (unsigned short)1365;
unsigned long long int var_18 = 8114991915101823822ULL;
signed char var_19 = (signed char)72;
signed char var_20 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
