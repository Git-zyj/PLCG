#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
unsigned char var_8 = (unsigned char)231;
int var_10 = -1794260906;
_Bool var_12 = (_Bool)1;
int var_13 = 2121329896;
unsigned long long int var_16 = 17511737074303605566ULL;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)30;
unsigned char var_20 = (unsigned char)224;
unsigned long long int var_21 = 12796682550521225183ULL;
unsigned int var_22 = 401501292U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
