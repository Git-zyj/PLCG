#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2909;
unsigned int var_2 = 403218856U;
unsigned int var_3 = 3010408784U;
_Bool var_4 = (_Bool)0;
long long int var_10 = 1171996889678099455LL;
signed char var_11 = (signed char)-65;
unsigned int var_15 = 4227357283U;
int zero = 0;
unsigned short var_19 = (unsigned short)43185;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)53588;
int var_23 = -223944990;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
