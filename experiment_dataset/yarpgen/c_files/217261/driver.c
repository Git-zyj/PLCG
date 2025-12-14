#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 64830353;
int var_3 = -79748332;
int var_5 = -579540420;
unsigned int var_10 = 1610772517U;
unsigned int var_12 = 3144048754U;
int var_17 = -1426734277;
int zero = 0;
unsigned long long int var_19 = 5390439448207590202ULL;
int var_20 = 805291272;
unsigned long long int var_21 = 369270194896378825ULL;
unsigned char var_22 = (unsigned char)97;
_Bool var_23 = (_Bool)0;
unsigned int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1542880826U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 13356461316503508224ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
