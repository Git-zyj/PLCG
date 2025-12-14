#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2105783931616437214LL;
unsigned char var_2 = (unsigned char)250;
unsigned long long int var_3 = 37027918937992583ULL;
long long int var_5 = 971390373042058954LL;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_7 = 10496200856018080435ULL;
unsigned long long int var_8 = 8468169871334624649ULL;
unsigned long long int var_9 = 10562172663123617384ULL;
long long int var_10 = 8921720932990455201LL;
_Bool var_11 = (_Bool)0;
signed char var_17 = (signed char)-19;
int zero = 0;
unsigned long long int var_19 = 2872945480769359916ULL;
unsigned short var_20 = (unsigned short)13472;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
