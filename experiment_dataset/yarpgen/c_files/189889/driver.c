#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)28;
long long int var_1 = 636125593030586412LL;
unsigned long long int var_2 = 3951608950428831764ULL;
unsigned long long int var_3 = 13558325870979352990ULL;
unsigned int var_4 = 3410785378U;
unsigned long long int var_5 = 11475596206050719382ULL;
unsigned int var_6 = 1133322805U;
unsigned short var_8 = (unsigned short)61031;
signed char var_9 = (signed char)68;
unsigned long long int var_10 = 10507677960885911913ULL;
int zero = 0;
signed char var_11 = (signed char)-47;
signed char var_12 = (signed char)-15;
unsigned int var_13 = 729603718U;
long long int var_14 = 6101862376888717878LL;
signed char var_15 = (signed char)48;
unsigned short var_16 = (unsigned short)259;
unsigned short var_17 = (unsigned short)57681;
unsigned long long int var_18 = 5141545263098444121ULL;
signed char var_19 = (signed char)38;
unsigned int var_20 = 2193724161U;
long long int var_21 = -7472713060044038120LL;
signed char var_22 = (signed char)-56;
signed char var_23 = (signed char)123;
signed char var_24 = (signed char)21;
unsigned long long int var_25 = 1482595467578813095ULL;
long long int var_26 = 8202990570088005232LL;
unsigned short var_27 = (unsigned short)41074;
signed char var_28 = (signed char)48;
unsigned long long int var_29 = 6519644562778150597ULL;
signed char var_30 = (signed char)70;
long long int var_31 = 3701854733481039768LL;
unsigned long long int arr_0 [18] ;
unsigned long long int arr_1 [18] [18] ;
short arr_4 [24] ;
unsigned long long int arr_5 [24] ;
signed char arr_7 [24] [24] ;
signed char arr_10 [23] ;
unsigned long long int arr_11 [23] ;
signed char arr_13 [23] [23] [23] ;
unsigned short arr_15 [23] ;
signed char arr_16 [23] [23] [23] [23] ;
unsigned long long int arr_17 [23] ;
signed char arr_27 [23] [23] ;
short arr_41 [23] [23] ;
signed char arr_45 [18] ;
signed char arr_2 [18] ;
unsigned int arr_3 [18] [18] ;
unsigned long long int arr_20 [23] [23] [23] ;
signed char arr_23 [23] [23] ;
long long int arr_24 [23] [23] ;
long long int arr_38 [23] ;
unsigned long long int arr_39 [23] [23] [23] [23] ;
unsigned long long int arr_42 [23] [23] [23] [23] ;
unsigned long long int arr_43 [23] [23] [23] [23] ;
long long int arr_52 [18] ;
long long int arr_57 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 675789661250943617ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = 14605437299304331571ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)-22715;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 4580497035167183651ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)-9;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_10 [i_0] = (signed char)93;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = 16616309380287735009ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_15 [i_0] = (unsigned short)47937;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (signed char)114;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 2610116963341062344ULL : 845536837597506337ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-11 : (signed char)-89;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_41 [i_0] [i_1] = (short)-31423;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = (signed char)-84;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (signed char)27;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 3195196752U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_20 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1116641856709929624ULL : 765925095890983020ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)64 : (signed char)29;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_24 [i_0] [i_1] = (i_1 % 2 == 0) ? -2086409593273505094LL : 5535775704417415397LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_38 [i_0] = (i_0 % 2 == 0) ? -6827311571325478401LL : 4427432703322435830LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 4367402944200272937ULL : 911634604587051452ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 122764530240904558ULL : 11735767659048002518ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 2455307750797661438ULL : 11689369468300152301ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_52 [i_0] = 2537614886760370064LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_57 [i_0] [i_1] [i_2] = -5750024613402385485LL;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                hash(&seed, arr_20 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_43 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_57 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
