#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -113612885;
unsigned short var_5 = (unsigned short)42392;
int var_7 = -282691321;
long long int var_8 = 7359725336566907585LL;
long long int var_16 = 5273241949350760433LL;
int zero = 0;
unsigned char var_18 = (unsigned char)175;
_Bool var_19 = (_Bool)1;
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
