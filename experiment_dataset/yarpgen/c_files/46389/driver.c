#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)132;
long long int var_1 = -7693712632672777158LL;
_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)36;
unsigned long long int var_5 = 15206247131224831374ULL;
unsigned char var_6 = (unsigned char)34;
unsigned short var_7 = (unsigned short)32000;
unsigned short var_9 = (unsigned short)50883;
unsigned short var_10 = (unsigned short)38455;
int zero = 0;
unsigned short var_11 = (unsigned short)61947;
int var_12 = -971319526;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
