#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1559;
signed char var_1 = (signed char)-10;
long long int var_5 = -8502987872535119211LL;
signed char var_6 = (signed char)-88;
unsigned short var_8 = (unsigned short)1657;
int zero = 0;
int var_11 = 827080177;
long long int var_12 = 4639192165577559837LL;
int var_13 = 185078576;
unsigned long long int var_14 = 9186887628105736934ULL;
unsigned short var_15 = (unsigned short)26763;
unsigned long long int var_16 = 16590617229126015831ULL;
unsigned long long int var_17 = 13490892863133155389ULL;
unsigned long long int var_18 = 6565420488680830954ULL;
unsigned short var_19 = (unsigned short)60242;
long long int var_20 = 6343890505327130332LL;
unsigned long long int var_21 = 12556360073902179608ULL;
int var_22 = 1392201775;
unsigned long long int var_23 = 9258824456471978319ULL;
unsigned short var_24 = (unsigned short)17009;
unsigned short arr_0 [15] ;
unsigned long long int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
unsigned short arr_8 [20] ;
unsigned long long int arr_9 [20] ;
unsigned long long int arr_10 [20] [20] ;
unsigned short arr_12 [20] ;
long long int arr_16 [25] ;
long long int arr_19 [25] ;
signed char arr_21 [25] [25] [25] [25] ;
unsigned short arr_22 [25] [25] [25] ;
long long int arr_26 [25] [25] [25] [25] [25] ;
unsigned long long int arr_27 [25] [25] [25] [25] [25] ;
long long int arr_31 [25] ;
long long int arr_33 [25] [25] [25] ;
long long int arr_4 [15] [15] ;
long long int arr_5 [15] [15] ;
unsigned long long int arr_6 [15] ;
unsigned short arr_7 [15] [15] ;
long long int arr_13 [20] ;
unsigned long long int arr_20 [25] [25] ;
int arr_28 [25] ;
long long int arr_34 [25] [25] [25] ;
int arr_35 [25] ;
long long int arr_36 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned short)34904;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 4061341606726055263ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 9433605984207252596ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 16731787669171367122ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = (unsigned short)73;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_9 [i_0] = 6212900133683990766ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = 9159794156098641667ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)53907;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = -5895106716672216442LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = -7590426879132605686LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)87;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned short)30654;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 4020347733232864691LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 7183717459500812764ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? 4425094908175639503LL : 7410743174240256342LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = -7955556493491184722LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -5470765589705959548LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 8482928005476291188LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 13088440381894776613ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned short)44168;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_13 [i_0] = -3082338812983591574LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_20 [i_0] [i_1] = 1542776436019926800ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_28 [i_0] = -708540463;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -4295679914120880902LL : -5805360271488469569LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_35 [i_0] = 317358141;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_36 [i_0] = 1654794665639117536LL;
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
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_34 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_36 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
