#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7769879584428956020ULL;
unsigned long long int var_3 = 299151768464452082ULL;
int var_4 = 1497613535;
unsigned char var_7 = (unsigned char)109;
unsigned int var_8 = 2589001241U;
unsigned short var_9 = (unsigned short)25789;
unsigned long long int var_11 = 13833187186211037884ULL;
int var_13 = -97102488;
int zero = 0;
signed char var_18 = (signed char)-108;
unsigned int var_19 = 3040931801U;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)4;
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
