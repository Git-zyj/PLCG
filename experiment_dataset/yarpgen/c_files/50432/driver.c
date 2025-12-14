#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 6467886261141313577LL;
unsigned long long int var_5 = 8854361822769246468ULL;
short var_6 = (short)3340;
short var_8 = (short)10645;
short var_9 = (short)16766;
short var_10 = (short)-5600;
signed char var_12 = (signed char)-93;
int zero = 0;
unsigned char var_15 = (unsigned char)2;
long long int var_16 = -399809191518442520LL;
short var_17 = (short)8912;
int var_18 = 911020648;
unsigned short var_19 = (unsigned short)45001;
long long int arr_0 [17] ;
long long int arr_2 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 5257057985796840520LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -286297715912335676LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)0;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
