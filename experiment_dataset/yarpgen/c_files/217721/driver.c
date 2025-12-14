#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7933893209600597683LL;
long long int var_2 = 7514949080312684783LL;
long long int var_5 = 5603277840831906124LL;
unsigned short var_6 = (unsigned short)32355;
int var_9 = -506529836;
long long int var_12 = 8358420090610555496LL;
int zero = 0;
unsigned long long int var_13 = 564664321653017804ULL;
signed char var_14 = (signed char)94;
long long int var_15 = 8731284882157840891LL;
int var_16 = 1213028042;
unsigned short var_17 = (unsigned short)16992;
long long int var_18 = -1102767211045299029LL;
long long int var_19 = 5558894252243621153LL;
unsigned short var_20 = (unsigned short)58578;
int var_21 = -124874084;
long long int var_22 = 7333309687109307255LL;
long long int var_23 = 8594309113880281823LL;
int var_24 = -2097271671;
unsigned long long int var_25 = 18220253123932516706ULL;
long long int var_26 = -4651611417590774642LL;
signed char var_27 = (signed char)31;
int var_28 = -345950834;
long long int arr_0 [22] [22] ;
long long int arr_1 [22] ;
unsigned long long int arr_2 [22] [22] ;
long long int arr_5 [16] [16] ;
unsigned short arr_8 [16] ;
long long int arr_9 [16] [16] ;
int arr_10 [16] [16] [16] ;
long long int arr_11 [16] [16] [16] ;
unsigned short arr_4 [22] [22] ;
long long int arr_13 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = -4759305451722108016LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = -4098932995110858375LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = 15198555420059751302ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = 4161320936235099917LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)58523 : (unsigned short)19404;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? 1733007973074045155LL : 6043725965563142739LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -607922075;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -6771225381085700127LL : 8892375852593298536LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)45694;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = -1549170168374092452LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
