#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)235;
_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)52411;
unsigned int var_5 = 1576662234U;
unsigned int var_6 = 1438590578U;
unsigned short var_7 = (unsigned short)53414;
unsigned short var_8 = (unsigned short)46803;
int zero = 0;
unsigned int var_10 = 4233478279U;
unsigned short var_11 = (unsigned short)38651;
unsigned char var_12 = (unsigned char)32;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 17823578951706446577ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
