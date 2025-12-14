#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54141;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)1;
signed char var_6 = (signed char)-73;
unsigned long long int var_8 = 5716364407411859453ULL;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)63;
unsigned char var_17 = (unsigned char)169;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)40425;
unsigned int var_22 = 4040582525U;
unsigned int var_23 = 3501764330U;
unsigned short var_24 = (unsigned short)51937;
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
