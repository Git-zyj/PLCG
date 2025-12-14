#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2203974775U;
unsigned int var_4 = 4224825809U;
_Bool var_5 = (_Bool)1;
long long int var_6 = -4166444205893061667LL;
int var_7 = -1100870424;
int var_8 = 1193713237;
int zero = 0;
short var_10 = (short)13370;
unsigned short var_11 = (unsigned short)50451;
long long int var_12 = 2328938249556908965LL;
int var_13 = 415978139;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 16879936858027203486ULL;
signed char var_16 = (signed char)31;
long long int var_17 = 8668064356957721654LL;
unsigned short var_18 = (unsigned short)32875;
int var_19 = -425745084;
signed char var_20 = (signed char)-51;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 16721275740574856276ULL;
unsigned long long int var_23 = 13073904308888522657ULL;
unsigned char var_24 = (unsigned char)169;
short var_25 = (short)11223;
_Bool var_26 = (_Bool)1;
signed char var_27 = (signed char)109;
short var_28 = (short)-10690;
long long int var_29 = 7282687387850352410LL;
int var_30 = 598980512;
_Bool var_31 = (_Bool)0;
short var_32 = (short)27849;
_Bool var_33 = (_Bool)1;
unsigned short var_34 = (unsigned short)61932;
_Bool var_35 = (_Bool)0;
long long int var_36 = 1271450269620854587LL;
short var_37 = (short)16800;
unsigned char var_38 = (unsigned char)83;
unsigned char var_39 = (unsigned char)184;
unsigned short var_40 = (unsigned short)3336;
long long int var_41 = -526143745584681216LL;
long long int var_42 = 3591197019808056227LL;
short var_43 = (short)26653;
int var_44 = -1614862734;
_Bool var_45 = (_Bool)0;
long long int var_46 = -1222297682531173802LL;
_Bool arr_0 [15] ;
unsigned long long int arr_1 [15] [15] ;
_Bool arr_2 [15] [15] ;
long long int arr_4 [15] [15] ;
unsigned short arr_5 [15] ;
short arr_7 [15] [15] [15] ;
unsigned int arr_10 [15] [15] [15] [15] ;
int arr_11 [15] [15] [15] [15] [15] ;
long long int arr_15 [15] [15] ;
unsigned char arr_17 [15] [15] ;
short arr_20 [15] [15] ;
long long int arr_22 [15] ;
long long int arr_26 [15] [15] [15] ;
unsigned long long int arr_27 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_32 [15] [15] [15] ;
unsigned long long int arr_34 [15] ;
unsigned long long int arr_37 [15] [15] [15] [15] ;
long long int arr_38 [15] [15] [15] ;
short arr_39 [15] [15] [15] [15] ;
long long int arr_40 [15] [15] [15] [15] [15] ;
signed char arr_42 [15] [15] [15] [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 5358471463210405406ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = -3515669166609174720LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned short)10312;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)4569;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1511354816U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] = 2067999468;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = -8291948318998086263LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_20 [i_0] [i_1] = (short)12566;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_22 [i_0] = 8110933427365591130LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 8705265245934476307LL : 5688240335691507116LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 6071479596121669167ULL : 10394744867116153199ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = 7771716767681380642LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = 6378802015959846727ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 16617290218593796795ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = -6046410329507699808LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (short)-3020;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = -2746305727668334229LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)24;
}

void checksum() {
    hash(&seed, var_10);
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
