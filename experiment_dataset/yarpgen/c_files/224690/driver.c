#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2057727282U;
int var_5 = 310065058;
unsigned long long int var_10 = 12513441629943149689ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)205;
signed char var_13 = (signed char)-92;
unsigned short var_14 = (unsigned short)10880;
void init() {
}

void checksum() {
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
