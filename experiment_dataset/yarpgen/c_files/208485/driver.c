#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_8 = (short)18647;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)24012;
unsigned char var_16 = (unsigned char)221;
int zero = 0;
int var_17 = 64211037;
signed char var_18 = (signed char)39;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
