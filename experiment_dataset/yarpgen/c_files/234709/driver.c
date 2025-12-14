#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53249;
unsigned short var_2 = (unsigned short)45250;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 1113468081914957093ULL;
signed char var_8 = (signed char)-24;
unsigned int var_12 = 3829870349U;
int zero = 0;
unsigned char var_15 = (unsigned char)111;
signed char var_16 = (signed char)-82;
long long int var_17 = -996775981971259859LL;
long long int var_18 = -5389910864302284975LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
