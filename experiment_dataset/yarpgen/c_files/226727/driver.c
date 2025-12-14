#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)333;
short var_1 = (short)23926;
long long int var_3 = 550753153771297845LL;
short var_5 = (short)-12631;
int var_8 = -31188399;
unsigned short var_9 = (unsigned short)21206;
short var_12 = (short)9303;
long long int var_15 = -7070712386153435225LL;
unsigned short var_18 = (unsigned short)12491;
short var_19 = (short)-30856;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 6230657815402996469LL;
int var_22 = -2009583802;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
