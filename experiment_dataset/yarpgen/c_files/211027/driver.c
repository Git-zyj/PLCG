#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1351922628;
short var_6 = (short)-6007;
_Bool var_10 = (_Bool)0;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)55963;
unsigned short var_21 = (unsigned short)54530;
int var_22 = -846927537;
unsigned short var_23 = (unsigned short)1132;
void init() {
}

void checksum() {
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
