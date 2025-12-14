#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -445349700;
unsigned short var_2 = (unsigned short)4273;
unsigned short var_5 = (unsigned short)31605;
unsigned short var_7 = (unsigned short)50666;
long long int var_8 = 2387105471788015880LL;
unsigned short var_9 = (unsigned short)21954;
long long int var_10 = -1353217843807597227LL;
int var_12 = 1953654732;
unsigned short var_13 = (unsigned short)21082;
int var_14 = 1269097244;
long long int var_17 = -1521265786218440273LL;
unsigned short var_18 = (unsigned short)47726;
int zero = 0;
unsigned long long int var_19 = 18436741119982463179ULL;
unsigned short var_20 = (unsigned short)19208;
unsigned long long int var_21 = 3544360429852230467ULL;
unsigned short var_22 = (unsigned short)34186;
unsigned long long int var_23 = 5907201566209412371ULL;
int var_24 = -1074219344;
int var_25 = 1130360156;
unsigned long long int var_26 = 9667650360777954329ULL;
int var_27 = 731990037;
unsigned short var_28 = (unsigned short)56512;
unsigned long long int var_29 = 13331857496252708651ULL;
long long int var_30 = -493165508790615453LL;
int var_31 = -1354304249;
int var_32 = -2066901486;
int arr_1 [19] ;
long long int arr_2 [19] ;
unsigned long long int arr_3 [19] ;
long long int arr_4 [19] [19] ;
unsigned short arr_5 [19] [19] [19] ;
unsigned long long int arr_8 [19] [19] [19] ;
int arr_9 [19] [19] [19] ;
int arr_13 [19] [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 559703455;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -6174039386020305707LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = 11427880826416364476ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_4 [i_0] [i_1] = 4015846160852582094LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)5633;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 13352444037235585869ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -1090979980;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = -1429835253;
}

void checksum() {
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
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
