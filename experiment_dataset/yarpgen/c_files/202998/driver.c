#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)18;
signed char var_3 = (signed char)15;
long long int var_7 = -2075434505723140330LL;
long long int var_9 = 6205943800491882771LL;
unsigned int var_10 = 1013555456U;
int zero = 0;
unsigned int var_12 = 2573921685U;
long long int var_13 = 8512743443755392941LL;
short var_14 = (short)-27815;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)33504;
long long int arr_0 [21] ;
signed char arr_1 [21] ;
long long int arr_3 [21] ;
unsigned int arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 5103119435281642089LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)87 : (signed char)-91;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6694415752997843510LL : 3709130885761574740LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 4159593906U : 2775320892U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
