#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)161;
long long int var_1 = -6577275273649844918LL;
_Bool var_2 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 13494748488819619941ULL;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 871473632U;
_Bool var_8 = (_Bool)0;
short var_9 = (short)1255;
_Bool var_10 = (_Bool)1;
short var_11 = (short)26815;
signed char var_12 = (signed char)114;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 13277090408913020042ULL;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 3967714243650052539ULL;
short var_20 = (short)30826;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
