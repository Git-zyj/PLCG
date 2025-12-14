#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)207;
unsigned short var_1 = (unsigned short)15415;
long long int var_4 = 8669834961331378463LL;
unsigned char var_5 = (unsigned char)121;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-90;
int zero = 0;
long long int var_10 = -507220119418914617LL;
short var_11 = (short)-28000;
unsigned short var_12 = (unsigned short)62212;
long long int var_13 = -985008490134548626LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
