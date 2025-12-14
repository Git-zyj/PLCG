#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 93518608;
signed char var_5 = (signed char)47;
int var_6 = 171281865;
unsigned long long int var_7 = 7946021572502461991ULL;
unsigned long long int var_8 = 17623104878155717288ULL;
_Bool var_9 = (_Bool)1;
unsigned char var_10 = (unsigned char)63;
unsigned long long int var_11 = 11325484626469876257ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3352066527U;
unsigned int var_16 = 3265059683U;
unsigned long long int var_17 = 16574878524887616288ULL;
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
