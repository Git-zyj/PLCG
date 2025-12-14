#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 17247946961800818952ULL;
unsigned long long int var_6 = 15955466518363100398ULL;
signed char var_8 = (signed char)-89;
signed char var_13 = (signed char)67;
unsigned int var_15 = 2112560366U;
unsigned long long int var_16 = 8033023494131336712ULL;
unsigned int var_17 = 2925120036U;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3859110723265524404ULL;
unsigned int var_20 = 1323612864U;
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
