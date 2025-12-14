#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1627812569;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 4063743830U;
signed char var_7 = (signed char)-110;
signed char var_8 = (signed char)120;
signed char var_9 = (signed char)-69;
int var_10 = -2110598412;
int zero = 0;
long long int var_11 = 3260894722809579529LL;
int var_12 = 751538210;
unsigned short var_13 = (unsigned short)63128;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
