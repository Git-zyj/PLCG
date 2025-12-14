#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25847;
unsigned char var_5 = (unsigned char)12;
long long int var_11 = -1454617099808690323LL;
_Bool var_13 = (_Bool)1;
int var_14 = 1719724134;
unsigned long long int var_16 = 8172514761949964910ULL;
int zero = 0;
unsigned int var_19 = 2670981112U;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2849998145U;
unsigned int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1276888945U : 3207802481U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
