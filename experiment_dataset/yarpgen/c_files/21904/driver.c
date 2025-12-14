#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)119;
unsigned short var_4 = (unsigned short)54060;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 1909633061U;
signed char var_8 = (signed char)-115;
int zero = 0;
long long int var_12 = 5812604362448292469LL;
unsigned int var_13 = 3181796897U;
int var_14 = -2046609550;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
