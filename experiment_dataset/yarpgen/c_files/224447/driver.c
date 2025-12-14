#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9654411211943403911ULL;
long long int var_4 = -4715517636962120390LL;
signed char var_5 = (signed char)-70;
int var_7 = 221413368;
unsigned long long int var_9 = 3811979747899560402ULL;
unsigned long long int var_10 = 1971087075714792473ULL;
unsigned char var_11 = (unsigned char)230;
int zero = 0;
unsigned long long int var_12 = 6327322380124884962ULL;
unsigned char var_13 = (unsigned char)109;
short var_14 = (short)-28680;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 112763958U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
