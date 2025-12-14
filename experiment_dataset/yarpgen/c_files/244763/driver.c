#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -478629746;
long long int var_2 = 1529991931465321017LL;
unsigned int var_7 = 1629549461U;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7918015915515454878LL;
unsigned short var_15 = (unsigned short)11487;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)21007;
unsigned char var_19 = (unsigned char)62;
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
