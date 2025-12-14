#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)51144;
unsigned short var_4 = (unsigned short)40199;
long long int var_5 = -6929215047447036975LL;
short var_7 = (short)20519;
unsigned long long int var_10 = 3029579899864998345ULL;
long long int var_12 = 78883855404018260LL;
int zero = 0;
short var_17 = (short)-17462;
long long int var_18 = -5956734654165356662LL;
long long int var_19 = 7282926716816864229LL;
int var_20 = -460378734;
long long int var_21 = 2488846278024746328LL;
long long int arr_1 [17] ;
long long int arr_4 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 6046444212708014110LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1925788547198448324LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
