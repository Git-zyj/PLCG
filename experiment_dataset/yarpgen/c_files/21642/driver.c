#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4048748760U;
long long int var_1 = -1514941284741988797LL;
unsigned int var_2 = 791787089U;
long long int var_3 = -6430200666041779952LL;
long long int var_4 = 765388747368817312LL;
unsigned long long int var_5 = 5739805774958074991ULL;
unsigned int var_6 = 2227734060U;
long long int var_7 = 9089507441463916494LL;
long long int var_8 = -1554891896907999320LL;
unsigned int var_9 = 497290887U;
long long int var_10 = -2409555301152350824LL;
unsigned long long int var_11 = 5459250127595422542ULL;
unsigned long long int var_12 = 11654352436759455473ULL;
int zero = 0;
unsigned int var_13 = 3854361572U;
long long int var_14 = -8511247823053591959LL;
unsigned int var_15 = 3751369037U;
long long int var_16 = -5289587247168026701LL;
unsigned int var_17 = 1619570702U;
unsigned int var_18 = 588425559U;
long long int var_19 = 7080729625867544130LL;
long long int var_20 = -5078259383576513644LL;
unsigned int var_21 = 1762829343U;
unsigned int var_22 = 176437539U;
unsigned int var_23 = 604956446U;
unsigned long long int var_24 = 18390706752569752439ULL;
long long int var_25 = -514865452783013580LL;
unsigned int var_26 = 2897720983U;
unsigned int var_27 = 2861326112U;
long long int arr_3 [10] [10] ;
unsigned int arr_4 [10] [10] ;
long long int arr_5 [10] [10] ;
unsigned int arr_9 [10] [10] ;
unsigned long long int arr_16 [17] [17] ;
unsigned long long int arr_20 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = -3447408406790445852LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = 4024702155U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = -6766395408762837664LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_9 [i_0] [i_1] = 3270544929U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_16 [i_0] [i_1] = 11187947980014437041ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = 12218758414409468280ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
