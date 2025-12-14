#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)48934;
_Bool var_8 = (_Bool)0;
long long int var_17 = -8925540407710989288LL;
int zero = 0;
long long int var_19 = 1796384388900820147LL;
unsigned short var_20 = (unsigned short)60164;
long long int var_21 = 8770315989349256278LL;
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
