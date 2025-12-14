#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_1 = (unsigned char)43;
unsigned long long int var_2 = 1551867697899895358ULL;
long long int var_3 = -7665475001201057103LL;
signed char var_4 = (signed char)-6;
short var_5 = (short)11658;
_Bool var_6 = (_Bool)0;
int zero = 0;
unsigned long long int var_13 = 11295652959841943545ULL;
signed char var_14 = (signed char)65;
void init() {
}

void checksum() {
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
