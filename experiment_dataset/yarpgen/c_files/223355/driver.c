#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6953511914040892092LL;
unsigned short var_7 = (unsigned short)34281;
unsigned char var_13 = (unsigned char)115;
unsigned short var_16 = (unsigned short)50322;
int zero = 0;
long long int var_17 = 5527735236134711634LL;
long long int var_18 = -2007605539558183602LL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
