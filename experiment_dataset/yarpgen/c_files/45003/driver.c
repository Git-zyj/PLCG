#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)592;
int var_2 = 1467701541;
unsigned char var_4 = (unsigned char)220;
unsigned int var_6 = 2341567972U;
short var_8 = (short)-28366;
unsigned int var_12 = 1901936458U;
short var_16 = (short)-12753;
int zero = 0;
int var_20 = -1583897210;
unsigned char var_21 = (unsigned char)217;
unsigned long long int var_22 = 1244296788696597075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
