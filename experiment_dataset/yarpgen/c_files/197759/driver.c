#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)63286;
_Bool var_9 = (_Bool)1;
unsigned int var_10 = 933117265U;
unsigned long long int var_13 = 12153522761379582938ULL;
unsigned char var_14 = (unsigned char)106;
int var_15 = -1289918238;
int zero = 0;
long long int var_16 = 2671764399579851974LL;
unsigned short var_17 = (unsigned short)30741;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
