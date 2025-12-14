#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7516984148976462450ULL;
long long int var_5 = 3370066654786026035LL;
unsigned long long int var_9 = 6283788883230932788ULL;
long long int var_11 = 6429956456321879625LL;
unsigned int var_16 = 571854829U;
unsigned long long int var_18 = 14906490986401718750ULL;
int zero = 0;
long long int var_20 = -4019876834865497249LL;
unsigned int var_21 = 315406725U;
unsigned long long int var_22 = 15796989623688986411ULL;
unsigned int var_23 = 2223947704U;
unsigned long long int var_24 = 6504591368067024115ULL;
long long int var_25 = 166455555519789363LL;
long long int var_26 = 610043988417400198LL;
unsigned long long int var_27 = 12146952358543115868ULL;
unsigned int var_28 = 3811298486U;
unsigned long long int var_29 = 5512508503244016990ULL;
unsigned long long int var_30 = 18399104025473222480ULL;
unsigned int var_31 = 111307179U;
unsigned long long int arr_0 [13] ;
unsigned long long int arr_1 [13] ;
unsigned int arr_2 [13] ;
unsigned long long int arr_3 [13] [13] ;
unsigned int arr_6 [25] ;
unsigned int arr_7 [25] ;
unsigned long long int arr_10 [21] ;
unsigned long long int arr_11 [21] ;
unsigned int arr_14 [22] [22] ;
long long int arr_16 [22] ;
unsigned long long int arr_17 [22] ;
unsigned long long int arr_18 [22] [22] [22] ;
unsigned int arr_19 [22] [22] ;
unsigned int arr_20 [22] ;
unsigned int arr_22 [22] ;
long long int arr_23 [22] [22] ;
unsigned int arr_26 [22] [22] [22] [22] [22] ;
long long int arr_27 [22] [22] [22] ;
unsigned int arr_4 [13] [13] ;
unsigned long long int arr_5 [13] [13] ;
long long int arr_8 [25] [25] ;
unsigned long long int arr_9 [25] ;
unsigned int arr_12 [21] ;
unsigned long long int arr_13 [21] [21] ;
unsigned int arr_25 [22] [22] [22] ;
long long int arr_28 [22] [22] [22] [22] [22] ;
unsigned long long int arr_29 [22] [22] ;
unsigned int arr_30 [22] [22] ;
unsigned int arr_31 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 16796266668895022719ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 11850259943945796402ULL : 5911942181534504409ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3609864570U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 8951782575959120391ULL : 18123942893739787289ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = 3479705938U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 2780990428U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_10 [i_0] = 7700494327075562661ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = 5415520155765719906ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = 620463670U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = -8443743868915435733LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = 12995406374202552125ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = 17202268211504434741ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 1893691108U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = 863937607U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = 3829583316U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_23 [i_0] [i_1] = -9088245076374482840LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 2953327176U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = -6156386753854015594LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? 3397469980U : 4042902697U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 1331392219328807438ULL : 14247453788816850883ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_8 [i_0] [i_1] = -436028572395628056LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 502953859170446800ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 382401892U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_13 [i_0] [i_1] = 9997443854273427277ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = 258315038U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] = -8270754501830760140LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_29 [i_0] [i_1] = 10980255048600873790ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_30 [i_0] [i_1] = 4158755070U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_31 [i_0] [i_1] = 3543285330U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
