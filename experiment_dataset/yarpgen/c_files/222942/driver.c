#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
short var_7 = (short)31421;
unsigned short var_8 = (unsigned short)31830;
unsigned char var_12 = (unsigned char)250;
unsigned char var_13 = (unsigned char)1;
unsigned long long int var_16 = 5688452957553316046ULL;
int zero = 0;
signed char var_19 = (signed char)-40;
unsigned short var_20 = (unsigned short)37264;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
