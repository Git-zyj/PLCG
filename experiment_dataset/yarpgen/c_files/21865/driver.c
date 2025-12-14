#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)240;
unsigned long long int var_7 = 4927876667145711337ULL;
unsigned short var_8 = (unsigned short)55761;
short var_9 = (short)-19589;
unsigned short var_11 = (unsigned short)7748;
int zero = 0;
long long int var_18 = 912604813413939134LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 14210003580286358933ULL;
unsigned char var_21 = (unsigned char)206;
void init() {
}

void checksum() {
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
