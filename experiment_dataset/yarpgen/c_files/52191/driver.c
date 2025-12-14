#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -2191095682162685196LL;
unsigned long long int var_5 = 3710807454278741725ULL;
unsigned int var_6 = 3146371105U;
int zero = 0;
short var_18 = (short)-23829;
unsigned int var_19 = 1370310679U;
long long int var_20 = 2424334244384170882LL;
signed char var_21 = (signed char)83;
unsigned char var_22 = (unsigned char)105;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
