#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 232371816;
short var_4 = (short)61;
int var_9 = -1831170807;
int zero = 0;
unsigned short var_10 = (unsigned short)64431;
unsigned char var_11 = (unsigned char)56;
signed char var_12 = (signed char)-13;
unsigned int var_13 = 2941879121U;
int var_14 = 571563037;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
