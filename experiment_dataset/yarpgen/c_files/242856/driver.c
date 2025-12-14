#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17666397211719510837ULL;
short var_4 = (short)3331;
unsigned char var_5 = (unsigned char)178;
unsigned short var_9 = (unsigned short)12354;
unsigned long long int var_10 = 10014851765754057272ULL;
unsigned long long int var_12 = 5313735709419429836ULL;
int zero = 0;
unsigned long long int var_17 = 12227864320322975453ULL;
int var_18 = 1641376704;
unsigned long long int var_19 = 10656965826129814188ULL;
unsigned short var_20 = (unsigned short)47585;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-3512;
int var_23 = 2030572952;
unsigned char var_24 = (unsigned char)5;
short var_25 = (short)32249;
unsigned long long int arr_0 [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] [25] ;
short arr_5 [25] [25] [25] ;
unsigned char arr_10 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6418603640631917183ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 7317148316988341692LL : -1102022015760985626LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)21879 : (short)-26179;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)226;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
