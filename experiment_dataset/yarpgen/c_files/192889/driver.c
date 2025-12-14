#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6296323612230900648LL;
long long int var_10 = 6458726213183736607LL;
_Bool var_11 = (_Bool)1;
int var_12 = 1998578038;
int zero = 0;
unsigned char var_13 = (unsigned char)81;
unsigned char var_14 = (unsigned char)41;
unsigned long long int var_15 = 16677083089142430797ULL;
void init() {
}

void checksum() {
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
