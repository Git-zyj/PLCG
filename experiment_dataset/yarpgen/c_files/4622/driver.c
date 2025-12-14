#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-3;
signed char var_4 = (signed char)63;
signed char var_6 = (signed char)105;
int var_8 = 239492623;
long long int var_9 = 3678142001349262161LL;
unsigned long long int var_11 = 702389745015619667ULL;
signed char var_12 = (signed char)98;
signed char var_13 = (signed char)109;
unsigned long long int var_15 = 18094904547768298158ULL;
unsigned long long int var_17 = 4649185237317145397ULL;
int zero = 0;
signed char var_19 = (signed char)-47;
unsigned long long int var_20 = 3673246106491930726ULL;
int var_21 = 751481899;
unsigned char var_22 = (unsigned char)145;
signed char var_23 = (signed char)43;
unsigned long long int var_24 = 3168959917665529446ULL;
unsigned long long int var_25 = 11768688956952476701ULL;
unsigned long long int var_26 = 5934679432145943990ULL;
int var_27 = -2010100408;
unsigned long long int var_28 = 4255758010104013332ULL;
long long int arr_1 [25] [25] ;
unsigned long long int arr_3 [25] [25] ;
signed char arr_4 [25] ;
_Bool arr_5 [25] ;
unsigned long long int arr_7 [25] [25] [25] ;
signed char arr_8 [25] ;
unsigned long long int arr_9 [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -2544439887993629907LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 8340135928028381550ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 12057753349874924359ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = 15095943624717569482ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
