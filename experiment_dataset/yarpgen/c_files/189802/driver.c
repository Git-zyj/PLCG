#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8176160621638289154ULL;
signed char var_3 = (signed char)118;
signed char var_4 = (signed char)-19;
unsigned int var_6 = 130511151U;
_Bool var_8 = (_Bool)0;
unsigned int var_11 = 3277288162U;
unsigned int var_12 = 1573551535U;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)48;
unsigned char var_15 = (unsigned char)208;
long long int var_16 = 5305925917519299883LL;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 2473086089U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
