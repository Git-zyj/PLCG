#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9445492741650664140ULL;
long long int var_2 = -1813360033932204562LL;
short var_4 = (short)-19804;
short var_5 = (short)-1752;
long long int var_6 = -2131096908078640481LL;
_Bool var_10 = (_Bool)1;
unsigned int var_12 = 3228622627U;
int var_14 = 2081713357;
int zero = 0;
_Bool var_15 = (_Bool)0;
int var_16 = 332552862;
signed char var_17 = (signed char)125;
int var_18 = -310303135;
unsigned long long int arr_1 [22] ;
short arr_3 [22] [22] ;
int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 17708789387330588932ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-22207;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 1300250259 : -96964851;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
