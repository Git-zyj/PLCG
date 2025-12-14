#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)140;
short var_5 = (short)-24761;
unsigned char var_6 = (unsigned char)120;
short var_11 = (short)1289;
short var_14 = (short)30892;
signed char var_17 = (signed char)-116;
int zero = 0;
unsigned long long int var_18 = 6819197757864412165ULL;
short var_19 = (short)-2512;
_Bool var_20 = (_Bool)1;
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
