#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
long long int var_2 = -6978383836184065427LL;
unsigned long long int var_4 = 2499280058687406877ULL;
long long int var_7 = -2508569177263961064LL;
unsigned long long int var_8 = 6845239014991860669ULL;
short var_11 = (short)10137;
int zero = 0;
unsigned char var_12 = (unsigned char)124;
_Bool var_13 = (_Bool)1;
int var_14 = -513417010;
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
