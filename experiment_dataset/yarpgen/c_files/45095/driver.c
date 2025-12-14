#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-118;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)79;
long long int var_8 = 8759904445380961296LL;
long long int var_10 = -6949831138761327971LL;
unsigned short var_15 = (unsigned short)14587;
int zero = 0;
unsigned short var_19 = (unsigned short)13086;
_Bool var_20 = (_Bool)1;
int var_21 = -1916900105;
unsigned int arr_0 [15] ;
unsigned int arr_1 [15] ;
unsigned short arr_2 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 396341390U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 849725234U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9986;
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
