#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6847065227927641757ULL;
unsigned long long int var_6 = 3727391178909647381ULL;
unsigned long long int var_7 = 14332768401333433549ULL;
unsigned long long int var_8 = 10573573418471031751ULL;
unsigned long long int var_9 = 9586871434534081434ULL;
unsigned long long int var_10 = 16059826291769939372ULL;
unsigned long long int var_11 = 487756721433915620ULL;
unsigned long long int var_13 = 5622373071433986480ULL;
unsigned long long int var_14 = 3503450157200118617ULL;
unsigned long long int var_18 = 3203453614910340299ULL;
unsigned long long int var_19 = 4662578723965744790ULL;
int zero = 0;
unsigned long long int var_20 = 5293767952005332852ULL;
unsigned long long int var_21 = 17476638473955020511ULL;
unsigned long long int var_22 = 298530026112770256ULL;
unsigned long long int var_23 = 10583375067387003406ULL;
unsigned long long int var_24 = 9103763182318580541ULL;
unsigned long long int var_25 = 10725851156122666789ULL;
unsigned long long int var_26 = 11962012071548681081ULL;
unsigned long long int var_27 = 11462030050377426246ULL;
unsigned long long int arr_0 [18] [18] ;
unsigned long long int arr_1 [18] [18] ;
unsigned long long int arr_5 [23] [23] ;
unsigned long long int arr_6 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = 9940858152203052984ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 11798738884420227946ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = 224487252611355487ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = 14397300767257997803ULL;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
