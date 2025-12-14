#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2035597108U;
long long int var_1 = -4633376568547199111LL;
unsigned short var_2 = (unsigned short)26509;
short var_3 = (short)-14612;
long long int var_4 = 5539293562809534006LL;
long long int var_7 = 1221096447464783066LL;
long long int var_8 = -950530010037152195LL;
unsigned int var_14 = 1886622955U;
int zero = 0;
signed char var_16 = (signed char)59;
short var_17 = (short)-8875;
unsigned short var_18 = (unsigned short)55171;
long long int var_19 = 2372565065292071976LL;
long long int var_20 = 5880926031038681096LL;
int var_21 = 1124993239;
unsigned int var_22 = 1088225714U;
long long int arr_0 [17] ;
long long int arr_3 [17] [17] ;
unsigned short arr_6 [17] [17] [17] ;
int arr_12 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 922548197303715796LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = -4951013035102736092LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)46579;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 1639335910 : 1960298725;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
