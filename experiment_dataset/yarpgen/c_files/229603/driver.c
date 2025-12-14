#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
short var_3 = (short)-24557;
int var_4 = 1677807387;
short var_5 = (short)-27512;
long long int var_6 = -5341583225911594057LL;
unsigned short var_12 = (unsigned short)43969;
unsigned short var_13 = (unsigned short)21368;
int zero = 0;
unsigned short var_20 = (unsigned short)57085;
unsigned short var_21 = (unsigned short)63780;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)-29;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
