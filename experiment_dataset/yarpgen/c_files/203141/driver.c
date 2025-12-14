#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = 5303854932598563976LL;
unsigned char var_5 = (unsigned char)5;
unsigned short var_9 = (unsigned short)8287;
unsigned char var_13 = (unsigned char)217;
short var_15 = (short)-26402;
unsigned int var_19 = 2980293424U;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1781265418;
unsigned long long int var_22 = 17567023674822352566ULL;
unsigned char var_23 = (unsigned char)22;
int var_24 = 111377509;
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
