#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3032531895706785539LL;
unsigned long long int var_2 = 11386354674047453232ULL;
long long int var_4 = -7973210505778790443LL;
long long int var_9 = 2814426263802216544LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
long long int var_11 = 5926722638970686288LL;
signed char var_12 = (signed char)126;
signed char var_13 = (signed char)57;
unsigned char var_14 = (unsigned char)59;
unsigned int var_15 = 939022446U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
