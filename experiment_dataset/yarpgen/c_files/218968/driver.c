#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 17808460091459525064ULL;
unsigned int var_2 = 3706787705U;
signed char var_3 = (signed char)43;
unsigned int var_4 = 1790608591U;
int var_5 = 1631965060;
unsigned char var_6 = (unsigned char)39;
signed char var_7 = (signed char)-99;
unsigned char var_8 = (unsigned char)126;
unsigned long long int var_9 = 7238548160572058535ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
int var_11 = 218110994;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)117;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
