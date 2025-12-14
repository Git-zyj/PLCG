#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12168;
int var_11 = 598507900;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)121;
int zero = 0;
unsigned char var_17 = (unsigned char)50;
long long int var_18 = -3517490191739618605LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
