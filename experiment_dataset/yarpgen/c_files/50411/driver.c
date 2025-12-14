#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)53737;
unsigned long long int var_3 = 7696208104817662123ULL;
unsigned long long int var_5 = 2522048857364045777ULL;
signed char var_6 = (signed char)59;
unsigned int var_8 = 1285171312U;
unsigned int var_11 = 3547173893U;
unsigned short var_12 = (unsigned short)46423;
long long int var_14 = -4875720955688621085LL;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)20937;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
