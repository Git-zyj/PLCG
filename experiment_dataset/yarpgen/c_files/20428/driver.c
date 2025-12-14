#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
short var_4 = (short)17481;
unsigned short var_5 = (unsigned short)49819;
short var_7 = (short)-19490;
unsigned long long int var_8 = 2339201947642512316ULL;
long long int var_11 = 6122937046307913963LL;
unsigned char var_14 = (unsigned char)30;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_18 = 8270613249112466711LL;
unsigned long long int var_19 = 16559834416155891258ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
