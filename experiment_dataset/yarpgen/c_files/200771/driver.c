#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26205;
long long int var_1 = -918381180010225351LL;
unsigned char var_2 = (unsigned char)119;
short var_4 = (short)8983;
int var_15 = -751113853;
int zero = 0;
unsigned char var_16 = (unsigned char)37;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
