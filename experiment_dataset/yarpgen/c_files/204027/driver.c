#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4090545657U;
unsigned int var_10 = 3191697862U;
unsigned char var_13 = (unsigned char)68;
unsigned short var_14 = (unsigned short)11744;
long long int var_18 = 5448410982582625112LL;
int zero = 0;
unsigned int var_20 = 1917037921U;
unsigned int var_21 = 420835027U;
int var_22 = -2114322842;
_Bool var_23 = (_Bool)1;
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
