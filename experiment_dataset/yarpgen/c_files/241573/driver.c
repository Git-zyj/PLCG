#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16572657778364069417ULL;
long long int var_7 = 8517549457292638120LL;
short var_8 = (short)19518;
signed char var_12 = (signed char)97;
signed char var_13 = (signed char)-65;
int zero = 0;
unsigned short var_15 = (unsigned short)53156;
unsigned long long int var_16 = 4607285871222791533ULL;
unsigned int var_17 = 3361496979U;
unsigned int var_18 = 3862236987U;
unsigned char var_19 = (unsigned char)123;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
