#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26645;
int var_2 = -743442603;
unsigned int var_4 = 3932677722U;
signed char var_6 = (signed char)-82;
int var_9 = 1129927253;
unsigned char var_10 = (unsigned char)161;
int var_12 = 322902315;
unsigned int var_15 = 22865042U;
unsigned short var_16 = (unsigned short)62039;
long long int var_18 = -2274529755898651444LL;
short var_19 = (short)-23734;
int zero = 0;
int var_20 = 781923218;
short var_21 = (short)9735;
long long int var_22 = 3490277339170043618LL;
signed char var_23 = (signed char)100;
_Bool var_24 = (_Bool)0;
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
