#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22772;
unsigned short var_1 = (unsigned short)49363;
short var_3 = (short)-29792;
short var_4 = (short)5286;
long long int var_6 = -743480516115587895LL;
unsigned char var_8 = (unsigned char)203;
unsigned short var_9 = (unsigned short)15996;
long long int var_10 = -4163730460957390148LL;
unsigned long long int var_11 = 4828874483601894762ULL;
int zero = 0;
long long int var_12 = -5842083669030349372LL;
short var_13 = (short)-5082;
long long int var_14 = -6435846866824332265LL;
unsigned long long int arr_0 [25] ;
unsigned long long int arr_2 [25] ;
short arr_3 [25] ;
unsigned long long int arr_5 [25] [25] [25] [25] ;
unsigned long long int arr_6 [25] [25] [25] ;
short arr_7 [25] ;
unsigned long long int arr_8 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1043860028966091441ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 10091660823862106986ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-25746;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 17174858683774449349ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8540780754357966848ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (short)7513 : (short)16305;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 3015217883363526357ULL : 1213747939565885307ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
