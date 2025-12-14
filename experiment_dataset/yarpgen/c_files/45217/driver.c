#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -508986756201663450LL;
unsigned char var_4 = (unsigned char)242;
unsigned char var_6 = (unsigned char)148;
short var_7 = (short)28920;
long long int var_10 = 896877610493206818LL;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = -6825383434710817524LL;
unsigned long long int var_17 = 3270982762744022025ULL;
long long int var_18 = -8713034938349684380LL;
long long int var_19 = -5519340353112501409LL;
_Bool var_20 = (_Bool)0;
long long int var_21 = -5803794087087068036LL;
unsigned char arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned char)99;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
