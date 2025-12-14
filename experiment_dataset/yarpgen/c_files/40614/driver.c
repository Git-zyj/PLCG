#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)5;
_Bool var_2 = (_Bool)0;
int var_4 = -1762131005;
unsigned int var_7 = 249625168U;
unsigned short var_10 = (unsigned short)57241;
short var_11 = (short)10787;
int var_13 = 61709397;
int var_14 = -1839705078;
int zero = 0;
int var_18 = -1941611624;
long long int var_19 = 2182370124944242346LL;
unsigned short var_20 = (unsigned short)44973;
short var_21 = (short)12772;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
