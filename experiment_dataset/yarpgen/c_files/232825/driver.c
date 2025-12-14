#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_4 = 889630089;
long long int var_5 = 6473633904104445701LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8313697194001206969LL;
_Bool var_10 = (_Bool)1;
long long int var_12 = -4411928446413156884LL;
long long int var_14 = 6341208127342780678LL;
int var_15 = 311482060;
unsigned long long int var_17 = 5206441497728052252ULL;
int zero = 0;
unsigned long long int var_18 = 7927380720679120466ULL;
unsigned long long int var_19 = 2839499117886986209ULL;
long long int var_20 = 1629336785373032103LL;
int var_21 = 1096027907;
int var_22 = -1983100493;
_Bool var_23 = (_Bool)1;
_Bool var_24 = (_Bool)0;
long long int var_25 = 4429389115182917679LL;
_Bool var_26 = (_Bool)1;
long long int var_27 = 6099449308767832191LL;
_Bool var_28 = (_Bool)1;
long long int var_29 = 4504321652345319620LL;
_Bool var_30 = (_Bool)0;
long long int var_31 = -5082123998982803541LL;
unsigned long long int var_32 = 16193567857303587676ULL;
unsigned long long int arr_2 [13] [13] ;
unsigned long long int arr_6 [13] [13] [13] ;
int arr_10 [13] [13] [13] [13] [13] [13] ;
long long int arr_13 [13] [13] [13] [13] ;
long long int arr_17 [13] [13] ;
_Bool arr_18 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 7217706719210887128ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 11808729499978781199ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -1188138578;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -7387599879898861389LL : 4684555347717370452LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 6542405199918714200LL : 3520987115056736336LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
