#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-10121;
int var_5 = 102837314;
signed char var_8 = (signed char)79;
unsigned short var_13 = (unsigned short)20069;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = 2016689164;
long long int var_20 = 4597654582619290485LL;
long long int var_21 = -475514066592699511LL;
int var_22 = -1463310164;
unsigned long long int var_23 = 17958156938054694138ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
