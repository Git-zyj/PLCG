#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18051770021857736796ULL;
int var_3 = 305370041;
int var_5 = 1418116074;
unsigned long long int var_7 = 5578821479039061884ULL;
unsigned long long int var_11 = 15808218443544313471ULL;
int zero = 0;
int var_13 = -1070185205;
int var_14 = 1285449894;
int var_15 = -1372359755;
int var_16 = 542308907;
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
