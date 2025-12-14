#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8901;
long long int var_4 = -2003275370652123803LL;
unsigned short var_6 = (unsigned short)35457;
unsigned int var_7 = 2384462139U;
int var_12 = -872880430;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_18 = 330373218;
unsigned int var_19 = 1667832396U;
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
