#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_2 = (unsigned char)216;
short var_3 = (short)23348;
int var_4 = 57019434;
int var_11 = -640440940;
unsigned long long int var_12 = 3690931984871864861ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)158;
short var_14 = (short)12483;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 347506984589881122ULL;
unsigned char var_17 = (unsigned char)213;
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
