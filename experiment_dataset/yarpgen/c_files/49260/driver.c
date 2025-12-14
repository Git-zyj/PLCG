#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
unsigned long long int var_1 = 1257683277477282393ULL;
signed char var_2 = (signed char)-57;
_Bool var_3 = (_Bool)0;
long long int var_5 = 2256416673417720830LL;
_Bool var_6 = (_Bool)1;
int var_8 = -643820210;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 3612247659U;
unsigned char var_14 = (unsigned char)157;
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
