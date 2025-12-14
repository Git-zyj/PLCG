#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_2 = -7158353612920173503LL;
int var_7 = -1306537282;
short var_10 = (short)24949;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)51381;
long long int var_18 = -506404274163441953LL;
int zero = 0;
short var_19 = (short)-19895;
unsigned short var_20 = (unsigned short)62816;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
