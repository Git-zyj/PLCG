#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)19;
long long int var_3 = 7205192343417957948LL;
int var_4 = -2105632032;
unsigned int var_6 = 1888044262U;
unsigned char var_11 = (unsigned char)134;
int var_12 = 658380857;
unsigned long long int var_14 = 9181245389155629179ULL;
signed char var_18 = (signed char)121;
int zero = 0;
signed char var_19 = (signed char)-2;
long long int var_20 = -228106550475180025LL;
signed char var_21 = (signed char)-14;
signed char var_22 = (signed char)115;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
