#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)1120;
signed char var_2 = (signed char)-66;
unsigned int var_5 = 1034953764U;
unsigned char var_11 = (unsigned char)62;
unsigned int var_12 = 272107477U;
int var_13 = -669916992;
int zero = 0;
unsigned char var_14 = (unsigned char)133;
unsigned long long int var_15 = 4133441119346751307ULL;
signed char var_16 = (signed char)67;
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
