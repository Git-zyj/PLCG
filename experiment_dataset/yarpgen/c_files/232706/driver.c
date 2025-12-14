#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)31659;
signed char var_1 = (signed char)123;
long long int var_5 = -5723134042152964180LL;
unsigned short var_7 = (unsigned short)42925;
unsigned char var_10 = (unsigned char)49;
unsigned short var_12 = (unsigned short)64545;
unsigned short var_15 = (unsigned short)1176;
long long int var_16 = -7373704062706528893LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1350204006U;
unsigned long long int var_20 = 10849930120341114857ULL;
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
