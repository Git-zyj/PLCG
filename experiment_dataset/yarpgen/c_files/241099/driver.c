#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16127;
unsigned long long int var_4 = 3878223750273291472ULL;
unsigned short var_5 = (unsigned short)50808;
unsigned int var_6 = 4098662233U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-15451;
int zero = 0;
long long int var_11 = 2809529101330369054LL;
short var_12 = (short)21731;
long long int var_13 = -3280238226993679044LL;
void init() {
}

void checksum() {
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
