#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 697898831;
long long int var_1 = -6987164566386816330LL;
int var_4 = -895234006;
int var_6 = 446959650;
int var_9 = -977190405;
_Bool var_12 = (_Bool)1;
short var_13 = (short)10750;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
int var_17 = -1504628375;
int var_18 = -1313538795;
long long int var_19 = -6708979402120902313LL;
long long int var_20 = -1893194097071633280LL;
unsigned char var_21 = (unsigned char)15;
int var_22 = 1111239507;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 14414482296200202333ULL;
_Bool arr_0 [12] ;
long long int arr_1 [12] ;
int arr_2 [12] ;
unsigned long long int arr_3 [12] [12] ;
int arr_4 [12] ;
long long int arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 7009878907814817575LL : -3453162947306755255LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1264777889;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2113632021258804960ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = -1064931479;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = 231901880910267914LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
