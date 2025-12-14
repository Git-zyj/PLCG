#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8364637677426256821LL;
unsigned char var_1 = (unsigned char)55;
unsigned short var_2 = (unsigned short)12694;
long long int var_5 = -175298272334980672LL;
unsigned short var_7 = (unsigned short)64528;
long long int var_13 = 2766267312564272193LL;
int zero = 0;
unsigned char var_17 = (unsigned char)56;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)23145;
unsigned char var_21 = (unsigned char)27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
