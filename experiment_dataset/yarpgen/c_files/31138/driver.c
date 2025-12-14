#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1185696994U;
_Bool var_1 = (_Bool)1;
int var_2 = -247910624;
unsigned char var_3 = (unsigned char)23;
unsigned int var_4 = 468328231U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 7066382010163292482ULL;
short var_13 = (short)28713;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
