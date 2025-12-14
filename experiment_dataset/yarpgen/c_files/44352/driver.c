#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11168;
unsigned short var_1 = (unsigned short)39927;
long long int var_3 = -3777860859403794998LL;
int var_4 = 812996296;
_Bool var_7 = (_Bool)1;
signed char var_10 = (signed char)51;
signed char var_11 = (signed char)68;
int var_12 = -878445090;
int var_15 = -1053308311;
int zero = 0;
unsigned char var_16 = (unsigned char)115;
int var_17 = 1093949765;
unsigned char var_18 = (unsigned char)26;
short var_19 = (short)-29498;
unsigned short var_20 = (unsigned short)9663;
long long int arr_0 [24] ;
long long int arr_1 [24] ;
unsigned long long int arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -8226198064714678217LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -5090310141743241083LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 7498263378751985717ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = -8192553055974445442LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
