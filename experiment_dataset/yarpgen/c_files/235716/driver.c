#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3504928563U;
unsigned char var_1 = (unsigned char)34;
long long int var_3 = -8663067385267817529LL;
long long int var_5 = 3743533925813135060LL;
signed char var_15 = (signed char)-114;
unsigned short var_16 = (unsigned short)14271;
long long int var_19 = -8418698073499488346LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = -5585174695853194054LL;
unsigned short var_22 = (unsigned short)55996;
unsigned long long int var_23 = 4431739851813032159ULL;
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
