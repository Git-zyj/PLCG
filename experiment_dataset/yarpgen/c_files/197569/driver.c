#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3818736603063631150LL;
signed char var_2 = (signed char)-34;
unsigned long long int var_3 = 14705409928505687938ULL;
short var_5 = (short)-26159;
short var_6 = (short)-9989;
unsigned long long int var_8 = 17214327128811218855ULL;
short var_10 = (short)-6225;
int zero = 0;
long long int var_11 = 1599287686731322730LL;
unsigned char var_12 = (unsigned char)235;
int var_13 = -558005495;
unsigned char var_14 = (unsigned char)201;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
