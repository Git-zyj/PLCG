#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-82;
long long int var_3 = -733749309742082539LL;
_Bool var_5 = (_Bool)0;
int var_7 = -830310648;
unsigned long long int var_8 = 6889088190355630762ULL;
unsigned long long int var_12 = 3744837402162362097ULL;
int zero = 0;
int var_15 = -509194161;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 8014388539409151481ULL;
int var_18 = -242569296;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
