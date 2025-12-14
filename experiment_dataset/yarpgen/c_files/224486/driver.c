#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52462;
unsigned char var_3 = (unsigned char)71;
int var_4 = -2044119499;
short var_5 = (short)-2107;
signed char var_6 = (signed char)109;
_Bool var_7 = (_Bool)0;
short var_9 = (short)-13408;
int zero = 0;
unsigned char var_12 = (unsigned char)129;
unsigned short var_13 = (unsigned short)38163;
unsigned char var_14 = (unsigned char)173;
unsigned long long int var_15 = 9831081007412438984ULL;
int var_16 = -378225735;
long long int var_17 = -6761966898451893826LL;
unsigned long long int var_18 = 12051520393693549006ULL;
unsigned short var_19 = (unsigned short)9087;
signed char var_20 = (signed char)9;
unsigned short var_21 = (unsigned short)50452;
unsigned long long int var_22 = 10642072903856995761ULL;
long long int var_23 = -7647887885439207956LL;
int var_24 = 1719387351;
unsigned int var_25 = 1624824917U;
short arr_0 [19] [19] ;
short arr_1 [19] ;
unsigned long long int arr_2 [21] [21] ;
int arr_3 [21] ;
long long int arr_4 [16] ;
unsigned long long int arr_10 [15] [15] ;
unsigned long long int arr_6 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)27108 : (short)9242;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-4547 : (short)-26854;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 11650243224272621955ULL : 17382095186691576188ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 72933888 : 401055887;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = -1636590921232990077LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = 9706153231207892558ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 16442005676898616956ULL : 2249390172952796004ULL;
}

void checksum() {
    hash(&seed, var_12);
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
