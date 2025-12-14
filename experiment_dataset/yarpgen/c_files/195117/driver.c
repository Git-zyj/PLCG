#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 2076355678;
long long int var_2 = 4835412000160043400LL;
unsigned long long int var_5 = 8900136102376420770ULL;
signed char var_7 = (signed char)-13;
signed char var_11 = (signed char)-88;
unsigned short var_12 = (unsigned short)40427;
short var_13 = (short)-1272;
int var_14 = -1548940747;
long long int var_16 = 6633927616777777526LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)-21931;
unsigned short var_20 = (unsigned short)17266;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
