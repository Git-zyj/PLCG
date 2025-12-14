#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2393083300U;
unsigned long long int var_3 = 17630218618723860169ULL;
unsigned int var_4 = 2499122525U;
unsigned int var_7 = 1443403758U;
unsigned long long int var_9 = 11371557318062191730ULL;
unsigned long long int var_11 = 8905642958098238625ULL;
int zero = 0;
unsigned int var_12 = 2150386426U;
unsigned int var_13 = 3510185766U;
unsigned int var_14 = 528503010U;
unsigned int var_15 = 829851694U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
