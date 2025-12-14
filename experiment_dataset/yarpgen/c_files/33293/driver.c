#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 7219739650116586596LL;
_Bool var_5 = (_Bool)1;
long long int var_6 = 7742932059396547676LL;
short var_8 = (short)8026;
unsigned int var_13 = 187953701U;
long long int var_14 = -453538856675178783LL;
int zero = 0;
unsigned char var_18 = (unsigned char)28;
short var_19 = (short)18454;
long long int var_20 = -7088268478804673245LL;
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
