#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)207;
unsigned int var_11 = 3930769645U;
unsigned char var_12 = (unsigned char)61;
long long int var_15 = -5924819739031834921LL;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = -1449461719880857688LL;
unsigned short var_19 = (unsigned short)5137;
unsigned int var_20 = 2542540888U;
unsigned char var_21 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
