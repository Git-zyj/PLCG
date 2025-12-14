#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3435023098253016457ULL;
int var_7 = -2038658645;
int var_13 = 1605159670;
unsigned int var_14 = 401944773U;
unsigned long long int var_19 = 17028485669654395742ULL;
int zero = 0;
unsigned long long int var_20 = 11522598947308678440ULL;
int var_21 = 682219188;
unsigned int var_22 = 1285322413U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
