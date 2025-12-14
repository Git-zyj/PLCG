#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
unsigned long long int var_1 = 15277735070523191403ULL;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-104;
int zero = 0;
unsigned long long int var_17 = 6267808736765609264ULL;
short var_18 = (short)14595;
long long int var_19 = 6861359903394620135LL;
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
