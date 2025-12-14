#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53412;
short var_3 = (short)-27059;
signed char var_5 = (signed char)-11;
unsigned short var_6 = (unsigned short)32287;
unsigned long long int var_8 = 8716633279699985628ULL;
short var_9 = (short)32290;
unsigned long long int var_10 = 14742957055893321188ULL;
unsigned char var_11 = (unsigned char)123;
unsigned long long int var_12 = 7528727887337050196ULL;
unsigned long long int var_14 = 9387719321756175321ULL;
unsigned long long int var_15 = 17103838542083722230ULL;
unsigned long long int var_16 = 6039627869536242307ULL;
unsigned char var_17 = (unsigned char)152;
unsigned long long int var_18 = 6740913653988780063ULL;
unsigned char var_19 = (unsigned char)214;
int zero = 0;
unsigned long long int var_20 = 1946627062678978676ULL;
unsigned short var_21 = (unsigned short)19209;
signed char var_22 = (signed char)42;
signed char var_23 = (signed char)79;
short var_24 = (short)-11455;
short var_25 = (short)-17351;
unsigned long long int var_26 = 1747434354808474079ULL;
signed char var_27 = (signed char)-4;
unsigned long long int var_28 = 4106288411740009850ULL;
short var_29 = (short)29053;
short var_30 = (short)9526;
unsigned long long int var_31 = 17388858788105459750ULL;
unsigned char var_32 = (unsigned char)19;
unsigned char arr_5 [10] ;
signed char arr_8 [10] [10] [10] [10] ;
unsigned long long int arr_10 [10] [10] [10] [10] [10] ;
unsigned long long int arr_15 [13] [13] ;
short arr_20 [13] [13] [13] ;
unsigned long long int arr_21 [13] [13] [13] ;
unsigned long long int arr_22 [13] [13] [13] ;
unsigned char arr_25 [13] [13] ;
unsigned short arr_37 [20] ;
unsigned char arr_38 [20] [20] ;
unsigned short arr_40 [20] [20] ;
unsigned char arr_41 [20] ;
signed char arr_12 [10] [10] ;
signed char arr_28 [13] ;
unsigned long long int arr_34 [13] [13] [13] [13] ;
unsigned long long int arr_35 [13] [13] [13] [13] ;
unsigned long long int arr_36 [13] ;
unsigned long long int arr_39 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (unsigned char)180;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = 6231966423476749515ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_15 [i_0] [i_1] = 2131011026826813188ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (short)24964;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 321165784642912723ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 4520456696527156579ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)207;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_37 [i_0] = (unsigned short)49485;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_38 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_40 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)43857 : (unsigned short)37868;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned char)67 : (unsigned char)211;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)-104;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (signed char)19 : (signed char)18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 10551273686303833444ULL : 4145577138669760179ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 9770811967389855562ULL : 17832935316735129993ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 2529104735557044546ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = 4362607461574220869ULL;
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
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_34 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_39 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
