#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
long long int var_1 = -3635437344465472313LL;
_Bool var_3 = (_Bool)0;
short var_9 = (short)-28411;
unsigned long long int var_11 = 9096905116649513462ULL;
int var_13 = 1967579836;
int zero = 0;
long long int var_19 = -5575092035415889033LL;
int var_20 = 478324248;
signed char var_21 = (signed char)-126;
signed char var_22 = (signed char)-81;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
