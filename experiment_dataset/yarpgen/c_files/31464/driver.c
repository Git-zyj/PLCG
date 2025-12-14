#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5220;
unsigned long long int var_2 = 15037870522020122548ULL;
_Bool var_3 = (_Bool)1;
short var_7 = (short)16681;
long long int var_10 = 3150034191269866782LL;
unsigned short var_18 = (unsigned short)59726;
int zero = 0;
unsigned short var_19 = (unsigned short)44255;
short var_20 = (short)-17759;
short var_21 = (short)15009;
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
