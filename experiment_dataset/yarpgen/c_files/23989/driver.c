#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9869650246729261007ULL;
short var_1 = (short)18775;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)5847;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-11847;
unsigned short var_8 = (unsigned short)46869;
short var_9 = (short)-18600;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
