#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)113;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)53;
int var_8 = 1220501947;
signed char var_9 = (signed char)-122;
unsigned char var_11 = (unsigned char)90;
unsigned long long int var_12 = 8608566785827648348ULL;
int zero = 0;
signed char var_13 = (signed char)-63;
signed char var_14 = (signed char)22;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4843528961418640604ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
