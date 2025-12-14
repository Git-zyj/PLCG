#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11834475976927195912ULL;
unsigned short var_1 = (unsigned short)3622;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1310038320U;
signed char var_5 = (signed char)104;
unsigned short var_6 = (unsigned short)40119;
short var_11 = (short)-32456;
unsigned short var_13 = (unsigned short)50880;
int zero = 0;
signed char var_15 = (signed char)-37;
_Bool var_16 = (_Bool)1;
short var_17 = (short)30030;
unsigned long long int var_18 = 3249563487601251384ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
