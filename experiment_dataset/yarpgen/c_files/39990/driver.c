#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14893066555961332601ULL;
int var_1 = -1596697502;
long long int var_2 = -5676186990697122365LL;
unsigned long long int var_3 = 11185563796143282753ULL;
short var_4 = (short)-18466;
int var_6 = 1482227877;
long long int var_7 = -921276467279806521LL;
unsigned char var_8 = (unsigned char)53;
unsigned long long int var_9 = 2495289528311179157ULL;
unsigned long long int var_10 = 1329867567482398606ULL;
int zero = 0;
long long int var_11 = 2954412826801574089LL;
unsigned long long int arr_4 [25] ;
long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 16289233509319368651ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 5102989272191041537LL;
}

void checksum() {
    hash(&seed, var_11);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
