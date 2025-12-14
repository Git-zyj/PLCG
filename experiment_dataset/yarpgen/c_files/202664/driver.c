#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14718344117163870960ULL;
unsigned char var_3 = (unsigned char)170;
int var_7 = 707264602;
unsigned short var_8 = (unsigned short)46561;
unsigned long long int var_14 = 3460370465056066566ULL;
int var_18 = 1262665893;
int zero = 0;
unsigned int var_20 = 258877919U;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)1;
long long int var_23 = 914347593267080440LL;
unsigned short var_24 = (unsigned short)58018;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
