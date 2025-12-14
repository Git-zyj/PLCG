#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-17;
unsigned long long int var_2 = 11399928327228095043ULL;
unsigned char var_3 = (unsigned char)17;
_Bool var_7 = (_Bool)1;
unsigned long long int var_10 = 10500753235512673966ULL;
long long int var_13 = 9075631261469558114LL;
int zero = 0;
unsigned long long int var_14 = 8569000331485777304ULL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
