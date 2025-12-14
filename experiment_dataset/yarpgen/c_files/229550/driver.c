#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)120;
unsigned long long int var_2 = 160423139896368806ULL;
unsigned long long int var_4 = 12986701341768711405ULL;
signed char var_5 = (signed char)-108;
long long int var_6 = 5086262629634787481LL;
signed char var_7 = (signed char)-78;
_Bool var_8 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 4831164484134810780LL;
unsigned long long int var_12 = 6900358524166318651ULL;
long long int var_13 = 8356626846148712070LL;
long long int var_14 = -8759599551336339435LL;
long long int arr_2 [21] ;
long long int arr_3 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1334734725929989036LL : 1821414469782570645LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? -5181929573243930075LL : 2025010842940953605LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
