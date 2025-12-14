#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8403000651825987883LL;
unsigned long long int var_5 = 5180589254008660854ULL;
long long int var_7 = -5516837333739920002LL;
unsigned int var_8 = 334826772U;
unsigned char var_10 = (unsigned char)251;
unsigned int var_11 = 323441715U;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1290318608U;
void init() {
}

void checksum() {
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
