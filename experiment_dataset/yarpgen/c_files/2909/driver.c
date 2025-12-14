#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)36;
_Bool var_4 = (_Bool)0;
unsigned int var_7 = 2613672785U;
long long int var_8 = 6157956486492090397LL;
int zero = 0;
unsigned char var_11 = (unsigned char)6;
int var_12 = 880189336;
unsigned int var_13 = 3529777365U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
