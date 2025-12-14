#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 970095758;
long long int var_2 = 2627425819090414489LL;
unsigned long long int var_3 = 9923241163722396616ULL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 3533685377491844204ULL;
int var_8 = -1242957815;
unsigned int var_9 = 2873419563U;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2565393079U;
unsigned long long int var_14 = 16289820199367385201ULL;
unsigned int var_15 = 2155688320U;
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
