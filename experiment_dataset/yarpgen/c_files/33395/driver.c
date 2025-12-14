#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1467482238U;
signed char var_1 = (signed char)-50;
_Bool var_3 = (_Bool)0;
long long int var_4 = 8714945071445958581LL;
unsigned long long int var_6 = 8901350656374915242ULL;
unsigned char var_7 = (unsigned char)102;
short var_8 = (short)5932;
int zero = 0;
long long int var_10 = 5279176946465516891LL;
unsigned short var_11 = (unsigned short)42488;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
