#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)31181;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 7303751190428957955ULL;
signed char var_11 = (signed char)116;
unsigned long long int var_13 = 7773920729000964107ULL;
unsigned long long int var_14 = 10221347344410188353ULL;
unsigned long long int var_16 = 17908581279937428978ULL;
long long int var_18 = 374743036925150515LL;
unsigned short var_19 = (unsigned short)64240;
int zero = 0;
unsigned short var_20 = (unsigned short)18288;
signed char var_21 = (signed char)32;
long long int var_22 = 1375638921333017385LL;
long long int var_23 = 2583132342563938620LL;
long long int var_24 = -66090307644147412LL;
long long int arr_0 [16] ;
long long int arr_1 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? -8400669445544198168LL : -3283592894482055510LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -1798445601835402546LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
