#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)16376;
unsigned int var_3 = 3851063356U;
signed char var_6 = (signed char)-31;
int var_8 = 658590813;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-20624;
long long int var_11 = -1951942637845384212LL;
int zero = 0;
long long int var_12 = 1918849232329196765LL;
unsigned long long int var_13 = 5047180201583488170ULL;
signed char var_14 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
