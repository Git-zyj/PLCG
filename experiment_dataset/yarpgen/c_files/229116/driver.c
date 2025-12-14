#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)173;
short var_3 = (short)-20159;
_Bool var_7 = (_Bool)0;
int zero = 0;
long long int var_11 = 2483885187035918504LL;
unsigned long long int var_12 = 12714471264589058164ULL;
unsigned long long int var_13 = 14188056331712964582ULL;
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
