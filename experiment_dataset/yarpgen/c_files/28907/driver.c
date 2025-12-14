#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10916078887985296429ULL;
unsigned int var_4 = 2164433927U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 18102548082328063899ULL;
_Bool var_12 = (_Bool)1;
_Bool var_14 = (_Bool)1;
long long int var_18 = 222250999483768940LL;
int zero = 0;
short var_19 = (short)19009;
short var_20 = (short)9900;
signed char var_21 = (signed char)94;
_Bool var_22 = (_Bool)0;
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
