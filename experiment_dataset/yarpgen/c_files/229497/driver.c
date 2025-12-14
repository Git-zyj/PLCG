#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12730553088546485358ULL;
unsigned short var_2 = (unsigned short)21204;
long long int var_3 = 8732461250928294460LL;
int var_6 = 2060825622;
unsigned short var_8 = (unsigned short)10534;
signed char var_10 = (signed char)(-127 - 1);
unsigned long long int var_11 = 11535742384283136316ULL;
signed char var_13 = (signed char)-77;
signed char var_15 = (signed char)-61;
signed char var_16 = (signed char)-127;
int zero = 0;
unsigned int var_17 = 379151U;
short var_18 = (short)20734;
unsigned long long int var_19 = 5140960271208762847ULL;
signed char var_20 = (signed char)115;
void init() {
}

void checksum() {
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
