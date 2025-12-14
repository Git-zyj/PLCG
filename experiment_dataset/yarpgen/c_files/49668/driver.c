#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)43;
unsigned char var_4 = (unsigned char)1;
long long int var_5 = -4392521408467932464LL;
int var_7 = 660496770;
unsigned short var_9 = (unsigned short)30971;
unsigned char var_10 = (unsigned char)49;
unsigned long long int var_11 = 14839957013069922106ULL;
unsigned short var_12 = (unsigned short)29138;
unsigned long long int var_13 = 693578229420675148ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)34200;
unsigned int var_16 = 1069284068U;
long long int var_17 = 2963248870062247482LL;
unsigned short var_18 = (unsigned short)7458;
signed char var_19 = (signed char)83;
int var_20 = -1351208346;
unsigned char var_21 = (unsigned char)105;
long long int var_22 = 1669550664347176023LL;
signed char var_23 = (signed char)50;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)7092;
unsigned char var_26 = (unsigned char)228;
unsigned char var_27 = (unsigned char)27;
_Bool var_28 = (_Bool)0;
long long int var_29 = 2481724001309500118LL;
short var_30 = (short)9692;
long long int var_31 = 548557677681157304LL;
short var_32 = (short)27065;
long long int var_33 = 6464307044640206515LL;
unsigned long long int var_34 = 17532547002566064697ULL;
unsigned long long int var_35 = 7645128875417177566ULL;
short arr_0 [25] ;
_Bool arr_1 [25] ;
unsigned short arr_2 [25] [25] ;
unsigned short arr_3 [25] ;
unsigned short arr_4 [25] ;
unsigned short arr_7 [25] [25] [25] ;
long long int arr_9 [25] [25] ;
int arr_11 [25] [25] ;
long long int arr_12 [25] [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] ;
long long int arr_16 [25] [25] [25] [25] ;
unsigned short arr_20 [25] [25] [25] [25] [25] [25] ;
unsigned long long int arr_21 [25] [25] ;
unsigned char arr_22 [25] [25] [25] ;
unsigned long long int arr_24 [25] [25] [25] [25] ;
unsigned long long int arr_27 [25] [25] [25] ;
unsigned long long int arr_28 [25] [25] [25] [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (short)-5441;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)39012;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (unsigned short)44664;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (unsigned short)40465;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)29561;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = -6714771246316546185LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = -886999063;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -5027370650325373621LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 302586909384461783ULL : 2422382291911196797ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -722997033603588944LL : 6429907574086102956LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)61323 : (unsigned short)34758;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 3033167097161013140ULL : 117191989886091907ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (unsigned char)166;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 13383323531695573902ULL : 11353118410799757868ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 15827340605648098183ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 25; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 25; ++i_6) 
                                arr_28 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 14077019706042361059ULL;
}

void checksum() {
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
