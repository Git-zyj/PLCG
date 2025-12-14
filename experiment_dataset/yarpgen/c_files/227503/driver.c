#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-21;
_Bool var_1 = (_Bool)0;
int var_3 = -1331499626;
unsigned char var_4 = (unsigned char)247;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 4476240015155300528ULL;
unsigned int var_7 = 675550855U;
unsigned short var_10 = (unsigned short)31910;
int zero = 0;
int var_12 = 1824300860;
short var_13 = (short)-27511;
unsigned char var_14 = (unsigned char)253;
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
