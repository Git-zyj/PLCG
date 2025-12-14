#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)4852;
unsigned int var_1 = 2298490669U;
signed char var_2 = (signed char)46;
long long int var_3 = 4309009043475876684LL;
unsigned long long int var_4 = 7738576252332729051ULL;
unsigned long long int var_5 = 3145783607012606841ULL;
unsigned long long int var_6 = 1244291204430903717ULL;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_9 = (short)8075;
unsigned short var_10 = (unsigned short)7791;
int zero = 0;
unsigned int var_11 = 2461200073U;
unsigned long long int var_12 = 3565265588012180246ULL;
unsigned short var_13 = (unsigned short)20674;
unsigned int var_14 = 1680108665U;
signed char var_15 = (signed char)-107;
int var_16 = 269385123;
int var_17 = -634896764;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 1060032035U;
short var_20 = (short)32536;
unsigned short var_21 = (unsigned short)53420;
short var_22 = (short)-25682;
unsigned long long int var_23 = 5109651773141457915ULL;
unsigned char var_24 = (unsigned char)211;
unsigned char var_25 = (unsigned char)186;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)-92;
long long int var_28 = -8141609436632505785LL;
long long int var_29 = 3809365143430580539LL;
long long int var_30 = -3940000920097118153LL;
unsigned long long int arr_0 [10] ;
long long int arr_1 [10] ;
signed char arr_3 [10] ;
long long int arr_4 [10] [10] ;
int arr_12 [10] ;
int arr_15 [10] ;
unsigned long long int arr_21 [11] ;
unsigned long long int arr_26 [11] [11] [11] [11] [11] ;
unsigned char arr_36 [23] ;
int arr_37 [23] [23] ;
long long int arr_2 [10] ;
long long int arr_7 [10] [10] [10] ;
long long int arr_10 [10] ;
unsigned char arr_31 [11] [11] [11] [11] [11] ;
unsigned long long int arr_32 [11] [11] [11] [11] [11] ;
unsigned short arr_35 [11] ;
unsigned long long int arr_48 [11] [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 15389550337982267166ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6819955461857526005LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-46 : (signed char)95;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? -3088061544831683055LL : -488445109764353062LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_12 [i_0] = -1640961342;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_15 [i_0] = 1861733272;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = 1157159478936979619ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 9258417044890269951ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_36 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_37 [i_0] [i_1] = 2000700775;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3925717054291161102LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 5488023912133820946LL : 8733725955552389536LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = -2948277520942632509LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)192 : (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 8201201020739162936ULL : 17320846411735462358ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_35 [i_0] = (unsigned short)52875;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1906646110576664398ULL : 15759169989802536493ULL;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_35 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
