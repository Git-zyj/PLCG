#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1325427824U;
long long int var_5 = 8454045254333541488LL;
unsigned char var_7 = (unsigned char)81;
long long int var_8 = 8073906373855817714LL;
_Bool var_10 = (_Bool)1;
unsigned long long int var_12 = 1497381200451800799ULL;
int zero = 0;
unsigned long long int var_13 = 13531423200426835828ULL;
signed char var_14 = (signed char)60;
short var_15 = (short)17573;
unsigned long long int var_16 = 6135653150112393152ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
