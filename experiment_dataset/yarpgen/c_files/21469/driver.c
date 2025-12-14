#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3516869913U;
short var_4 = (short)-28520;
short var_5 = (short)-14663;
short var_6 = (short)-1955;
unsigned long long int var_7 = 13837166623908239152ULL;
unsigned short var_8 = (unsigned short)42585;
signed char var_9 = (signed char)78;
unsigned int var_10 = 1939562203U;
int zero = 0;
long long int var_11 = 8720824941487355205LL;
short var_12 = (short)6683;
signed char var_13 = (signed char)59;
long long int var_14 = -7936088066182384086LL;
int var_15 = -1530450659;
unsigned long long int var_16 = 13320522015492819726ULL;
unsigned char var_17 = (unsigned char)186;
int var_18 = -1749756197;
unsigned long long int var_19 = 14931622570048454353ULL;
unsigned short arr_0 [12] [12] ;
long long int arr_1 [12] ;
unsigned int arr_3 [12] [12] [12] ;
signed char arr_4 [17] ;
unsigned short arr_6 [17] ;
short arr_7 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)39174;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 725043967488727107LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 4162339724U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (signed char)57;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned short)19841;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)23153;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
