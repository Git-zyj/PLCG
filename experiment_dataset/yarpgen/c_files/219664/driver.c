#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8294536117228617080LL;
unsigned char var_7 = (unsigned char)199;
signed char var_11 = (signed char)-43;
unsigned long long int var_17 = 528993374181720501ULL;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3351104284U;
long long int var_20 = 1567930532748544370LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
