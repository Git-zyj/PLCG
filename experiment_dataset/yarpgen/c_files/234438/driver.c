#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)194;
unsigned int var_8 = 813223059U;
unsigned char var_11 = (unsigned char)13;
unsigned char var_13 = (unsigned char)215;
unsigned long long int var_16 = 3839602966235643277ULL;
unsigned short var_17 = (unsigned short)22202;
int zero = 0;
unsigned short var_19 = (unsigned short)55017;
unsigned short var_20 = (unsigned short)345;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)221;
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
