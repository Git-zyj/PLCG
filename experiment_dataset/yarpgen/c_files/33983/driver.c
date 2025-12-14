#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37598;
_Bool var_1 = (_Bool)1;
unsigned char var_3 = (unsigned char)109;
unsigned int var_5 = 2637467908U;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-11465;
long long int var_12 = 935993932507671871LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)108;
long long int var_18 = 6962358547450658478LL;
short var_19 = (short)-3636;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
