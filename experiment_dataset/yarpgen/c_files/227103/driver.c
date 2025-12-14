#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3264448017U;
unsigned long long int var_1 = 12403941565837397123ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)32647;
unsigned short var_8 = (unsigned short)46307;
unsigned long long int var_9 = 11225995891501582632ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)64220;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)101;
unsigned short var_16 = (unsigned short)37083;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
