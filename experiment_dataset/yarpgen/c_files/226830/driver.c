#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3890082986U;
int var_8 = 944814895;
_Bool var_9 = (_Bool)0;
unsigned long long int var_10 = 5500851450627131340ULL;
unsigned char var_12 = (unsigned char)232;
unsigned char var_17 = (unsigned char)91;
int zero = 0;
long long int var_18 = 6173637742475969109LL;
unsigned short var_19 = (unsigned short)34639;
int var_20 = 310029828;
_Bool var_21 = (_Bool)1;
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
