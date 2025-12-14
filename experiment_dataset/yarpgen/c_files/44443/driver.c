#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 10834094409895120324ULL;
int var_9 = -348326433;
int zero = 0;
long long int var_17 = 4475484822778028978LL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 1590924250U;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)56435;
unsigned long long int var_23 = 4772466787516283420ULL;
unsigned long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 7748446776054421252ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
