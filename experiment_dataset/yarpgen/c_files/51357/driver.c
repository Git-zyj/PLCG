#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3370735589142244539LL;
signed char var_1 = (signed char)96;
signed char var_2 = (signed char)96;
int var_4 = -292654953;
unsigned short var_6 = (unsigned short)19411;
unsigned short var_8 = (unsigned short)60719;
long long int var_9 = 4630249741603704193LL;
unsigned short var_11 = (unsigned short)64894;
unsigned short var_13 = (unsigned short)20098;
int zero = 0;
long long int var_15 = 4725672125389213817LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6634348162270883069LL;
long long int var_18 = 1009379949290951478LL;
signed char var_19 = (signed char)-85;
long long int var_20 = 2339127865424942374LL;
_Bool var_21 = (_Bool)1;
int arr_0 [15] ;
_Bool arr_1 [15] [15] ;
int arr_2 [15] ;
long long int arr_9 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 1987065727;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 230170692;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = 990684313484105426LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
