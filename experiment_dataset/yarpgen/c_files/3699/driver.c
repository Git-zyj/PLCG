#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)233;
unsigned short var_4 = (unsigned short)52692;
_Bool var_7 = (_Bool)0;
signed char var_11 = (signed char)90;
unsigned short var_13 = (unsigned short)13736;
unsigned int var_15 = 3006571991U;
int zero = 0;
int var_18 = 1040765481;
unsigned int var_19 = 2874039636U;
unsigned long long int var_20 = 1495748101152305850ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
