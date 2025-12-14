#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -376373154;
int var_2 = -1884428658;
signed char var_3 = (signed char)116;
unsigned char var_4 = (unsigned char)107;
unsigned long long int var_5 = 17094270372282570021ULL;
unsigned long long int var_6 = 13388865348954295137ULL;
signed char var_7 = (signed char)-47;
unsigned int var_8 = 924376144U;
unsigned int var_9 = 943326570U;
unsigned long long int var_10 = 7152491016997545507ULL;
int zero = 0;
long long int var_12 = -6197195792254036350LL;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-109;
unsigned char var_15 = (unsigned char)196;
unsigned int var_16 = 2947714475U;
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
