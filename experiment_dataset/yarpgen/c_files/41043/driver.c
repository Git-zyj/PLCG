#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)123;
unsigned long long int var_7 = 797674630966808128ULL;
unsigned long long int var_9 = 17842383806202478872ULL;
unsigned char var_11 = (unsigned char)90;
unsigned short var_13 = (unsigned short)30848;
unsigned short var_18 = (unsigned short)35343;
int zero = 0;
unsigned short var_19 = (unsigned short)45389;
int var_20 = 1516425612;
unsigned char var_21 = (unsigned char)68;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
