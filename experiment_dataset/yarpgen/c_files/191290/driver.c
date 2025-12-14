#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)113;
unsigned long long int var_4 = 16821378204034282639ULL;
unsigned long long int var_5 = 656453908624159027ULL;
unsigned short var_7 = (unsigned short)1385;
long long int var_8 = -2654481991397705018LL;
unsigned short var_12 = (unsigned short)7829;
unsigned int var_15 = 4122551470U;
int zero = 0;
short var_20 = (short)-31066;
short var_21 = (short)-3387;
short var_22 = (short)-4760;
_Bool var_23 = (_Bool)0;
_Bool var_24 = (_Bool)1;
unsigned int arr_1 [25] ;
unsigned short arr_2 [25] ;
unsigned long long int arr_3 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 729387363U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)34065;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 10319500650694367693ULL;
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
