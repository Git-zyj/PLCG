#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1362935755U;
long long int var_4 = 9178243428345848755LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_11 = 1232838023876228805ULL;
unsigned int var_14 = 1388235966U;
unsigned char var_15 = (unsigned char)103;
unsigned long long int var_16 = 3055313453119526750ULL;
unsigned char var_18 = (unsigned char)161;
int zero = 0;
unsigned char var_20 = (unsigned char)96;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
