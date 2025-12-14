#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4450208613165615506LL;
long long int var_8 = 6519344000286105517LL;
long long int var_11 = 8869624454378516188LL;
long long int var_13 = 8860428383896403182LL;
int zero = 0;
long long int var_15 = -8508372023917996424LL;
long long int var_16 = -8071286816166095710LL;
long long int var_17 = -1327165164198411645LL;
long long int var_18 = 8071625851884077549LL;
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
