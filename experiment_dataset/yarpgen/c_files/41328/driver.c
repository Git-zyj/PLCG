#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 395543168;
unsigned long long int var_3 = 10399420940852086426ULL;
long long int var_5 = -9140155808724012LL;
signed char var_7 = (signed char)-93;
long long int var_8 = 8708623747895587539LL;
unsigned short var_9 = (unsigned short)30264;
unsigned long long int var_10 = 11051747223648578921ULL;
unsigned char var_11 = (unsigned char)1;
int zero = 0;
unsigned short var_12 = (unsigned short)29365;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)10954;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
