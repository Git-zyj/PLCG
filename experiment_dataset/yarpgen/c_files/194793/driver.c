#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_4 = (unsigned char)235;
unsigned int var_5 = 1823364610U;
signed char var_6 = (signed char)-47;
signed char var_7 = (signed char)44;
short var_8 = (short)18246;
long long int var_9 = 614716893343949557LL;
unsigned int var_10 = 1002354929U;
short var_11 = (short)-7601;
short var_12 = (short)-32704;
int zero = 0;
unsigned int var_13 = 2358985537U;
unsigned char var_14 = (unsigned char)197;
short var_15 = (short)25214;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
