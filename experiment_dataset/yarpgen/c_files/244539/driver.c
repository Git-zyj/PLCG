#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1360175268;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
short var_6 = (short)16055;
_Bool var_7 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)108;
int var_11 = 1730486318;
long long int var_12 = -3259700189988385778LL;
unsigned char var_13 = (unsigned char)78;
unsigned char var_14 = (unsigned char)95;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
