#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2008348857158293927ULL;
unsigned short var_2 = (unsigned short)23415;
unsigned long long int var_3 = 12729393019407663871ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)13643;
int zero = 0;
unsigned long long int var_10 = 7476887056916287375ULL;
unsigned char var_11 = (unsigned char)139;
long long int var_12 = -779902763156616542LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
