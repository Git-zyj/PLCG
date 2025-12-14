#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1229023416;
short var_1 = (short)-8862;
short var_2 = (short)9314;
unsigned int var_3 = 183608008U;
long long int var_5 = -3212687085198064546LL;
unsigned short var_7 = (unsigned short)63100;
signed char var_8 = (signed char)42;
unsigned long long int var_9 = 12481225108450918729ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)1;
long long int var_12 = 7378221624420536624LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
