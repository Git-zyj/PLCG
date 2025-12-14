#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = 3853100744594868927LL;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)17781;
_Bool var_4 = (_Bool)0;
short var_9 = (short)16236;
long long int var_10 = -4075107409364262128LL;
long long int var_12 = 3710807321382319855LL;
short var_16 = (short)-19268;
unsigned char var_17 = (unsigned char)87;
int zero = 0;
signed char var_20 = (signed char)-88;
unsigned int var_21 = 2833644480U;
unsigned long long int var_22 = 182697690013577082ULL;
long long int var_23 = 5079114039354522717LL;
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
