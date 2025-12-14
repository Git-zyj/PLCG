#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_2 = -2097819611;
unsigned long long int var_4 = 8159198363230572353ULL;
unsigned char var_5 = (unsigned char)215;
unsigned long long int var_6 = 14064662280527058222ULL;
signed char var_7 = (signed char)117;
short var_8 = (short)-32682;
_Bool var_9 = (_Bool)1;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 7277476808739181085ULL;
unsigned char var_15 = (unsigned char)46;
int var_16 = -1321894839;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
