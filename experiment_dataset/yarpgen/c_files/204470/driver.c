#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1022987234U;
signed char var_1 = (signed char)-42;
int var_5 = -1576153696;
unsigned char var_6 = (unsigned char)155;
unsigned short var_8 = (unsigned short)40283;
unsigned long long int var_13 = 17274334078584292560ULL;
int zero = 0;
int var_16 = 2084833358;
signed char var_17 = (signed char)-34;
unsigned char var_18 = (unsigned char)10;
unsigned long long int var_19 = 3880600272705680071ULL;
unsigned short var_20 = (unsigned short)29940;
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
