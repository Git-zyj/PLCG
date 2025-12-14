#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3463715335277635704LL;
unsigned int var_1 = 2343244566U;
signed char var_2 = (signed char)62;
unsigned long long int var_3 = 12198624874249609079ULL;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-45;
signed char var_8 = (signed char)-118;
int var_9 = -1896259828;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-21;
int var_13 = 672129545;
signed char var_14 = (signed char)-93;
int zero = 0;
short var_15 = (short)6929;
signed char var_16 = (signed char)-124;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
