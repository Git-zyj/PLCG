#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1017068233;
unsigned int var_4 = 855777823U;
short var_12 = (short)-26664;
long long int var_13 = 9223044321831815576LL;
short var_14 = (short)24470;
int zero = 0;
signed char var_16 = (signed char)-112;
long long int var_17 = 8220917648417191187LL;
int var_18 = -472724794;
long long int var_19 = -480517182583190196LL;
unsigned short var_20 = (unsigned short)43112;
short var_21 = (short)26216;
unsigned long long int var_22 = 1427356757581344167ULL;
unsigned int var_23 = 3859498738U;
unsigned int var_24 = 1059356645U;
unsigned int arr_0 [18] [18] ;
unsigned int arr_1 [18] [18] ;
long long int arr_2 [18] ;
int arr_3 [25] ;
unsigned char arr_4 [25] ;
unsigned short arr_7 [17] ;
signed char arr_8 [17] ;
unsigned short arr_12 [10] ;
unsigned short arr_5 [25] [25] ;
unsigned short arr_9 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 611872590U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 1749675030U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2934523100476005958LL : -4433425169650270449LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = -18417159;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned char)86;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (unsigned short)39625;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (signed char)-1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = (unsigned short)54106;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)31872;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned short)5408;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
