#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9019376693261182268LL;
signed char var_1 = (signed char)69;
long long int var_3 = -5379725328306218424LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 497282193U;
unsigned int var_7 = 2213212794U;
short var_12 = (short)11114;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
unsigned char var_14 = (unsigned char)112;
void init() {
}

void checksum() {
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
