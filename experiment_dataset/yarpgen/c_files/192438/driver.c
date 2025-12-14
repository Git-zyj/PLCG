#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-77;
unsigned int var_2 = 4103677030U;
short var_3 = (short)14963;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 3202719354U;
unsigned short var_6 = (unsigned short)55090;
unsigned short var_7 = (unsigned short)55927;
unsigned int var_8 = 1727997578U;
unsigned short var_9 = (unsigned short)36836;
_Bool var_12 = (_Bool)0;
unsigned short var_14 = (unsigned short)57046;
int zero = 0;
unsigned short var_15 = (unsigned short)31289;
long long int var_16 = 1348637181032120634LL;
signed char var_17 = (signed char)-123;
int var_18 = -1553956666;
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
