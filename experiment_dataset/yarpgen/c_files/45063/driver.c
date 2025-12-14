#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_7 = (unsigned short)49737;
_Bool var_11 = (_Bool)1;
unsigned char var_15 = (unsigned char)104;
int zero = 0;
unsigned char var_19 = (unsigned char)202;
long long int var_20 = 7517587631172946681LL;
long long int var_21 = 2280517853041103824LL;
int var_22 = 1330151048;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
