#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 4156986112U;
unsigned long long int var_2 = 3183219641024947957ULL;
unsigned char var_4 = (unsigned char)254;
unsigned short var_6 = (unsigned short)53759;
signed char var_9 = (signed char)6;
short var_11 = (short)30743;
unsigned short var_13 = (unsigned short)11563;
unsigned short var_15 = (unsigned short)53478;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 18010320534998094444ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)68;
signed char var_20 = (signed char)118;
int var_21 = 688574687;
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
