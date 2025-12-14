#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)62166;
unsigned int var_4 = 405438098U;
long long int var_5 = -1467566703479378435LL;
unsigned short var_7 = (unsigned short)38512;
unsigned int var_8 = 4271228251U;
long long int var_9 = -6298249612997359065LL;
long long int var_19 = 6206360149576095805LL;
int zero = 0;
long long int var_20 = -4067971331398299408LL;
unsigned int var_21 = 568729666U;
unsigned int var_22 = 548794539U;
unsigned short var_23 = (unsigned short)26914;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
