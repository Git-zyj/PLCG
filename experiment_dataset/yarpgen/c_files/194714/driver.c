#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1377;
_Bool var_1 = (_Bool)0;
long long int var_2 = -6570558616666360903LL;
short var_6 = (short)14632;
short var_8 = (short)-820;
short var_9 = (short)31545;
unsigned int var_10 = 3756509750U;
short var_11 = (short)-31759;
int zero = 0;
short var_13 = (short)-5893;
unsigned short var_14 = (unsigned short)5338;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
