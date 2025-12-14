#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1536;
long long int var_2 = 8764838537756543177LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -6906320976079291961LL;
unsigned int var_6 = 869998600U;
_Bool var_7 = (_Bool)1;
long long int var_8 = 2864220684551207957LL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13925752457275544263ULL;
unsigned long long int var_14 = 5272261525857878486ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 2476983692680471478ULL;
signed char var_22 = (signed char)-75;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
