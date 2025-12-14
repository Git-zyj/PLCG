#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)28;
unsigned int var_8 = 1984665610U;
unsigned long long int var_10 = 15860237942466995534ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)1908;
unsigned char var_19 = (unsigned char)167;
long long int var_20 = 3488845319252774476LL;
unsigned long long int var_21 = 1702356512538758209ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
