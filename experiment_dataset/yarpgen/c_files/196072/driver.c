#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5080499119449000772LL;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 15821604114807497678ULL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)0;
unsigned char var_17 = (unsigned char)137;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-5847;
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
