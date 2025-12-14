#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 353725257;
signed char var_1 = (signed char)92;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)20;
signed char var_5 = (signed char)82;
signed char var_6 = (signed char)-75;
int var_10 = -1412015155;
int var_11 = -1515727285;
int zero = 0;
int var_12 = 348820088;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
