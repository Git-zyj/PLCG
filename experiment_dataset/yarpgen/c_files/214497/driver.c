#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
int zero = 0;
int var_11 = -647582674;
unsigned long long int var_12 = 16311369883417318219ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26087;
unsigned short var_15 = (unsigned short)18352;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
