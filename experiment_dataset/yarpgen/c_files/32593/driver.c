#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-19775;
short var_4 = (short)-26133;
short var_5 = (short)25952;
short var_6 = (short)24881;
long long int var_9 = -8988206393521913233LL;
long long int var_10 = -8754464919304515551LL;
short var_11 = (short)-8185;
short var_12 = (short)-24449;
long long int var_16 = -6640642529946337256LL;
int zero = 0;
short var_18 = (short)19535;
long long int var_19 = 564358737051278850LL;
long long int var_20 = 6359403338798647288LL;
short var_21 = (short)-7922;
long long int var_22 = -8257182325385117217LL;
long long int var_23 = 7704815706695883687LL;
long long int var_24 = 4515217675315793745LL;
short var_25 = (short)24235;
short var_26 = (short)1954;
long long int var_27 = 471019238507624700LL;
short var_28 = (short)-22383;
short var_29 = (short)-26317;
short var_30 = (short)-31238;
long long int arr_0 [10] ;
long long int arr_3 [10] [10] ;
long long int arr_4 [10] [10] [10] ;
short arr_5 [10] ;
long long int arr_8 [10] ;
long long int arr_10 [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -3482858736587684922LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 5835731992628020857LL : 7783845402374000236LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? -5491322174255677501LL : 5189353676440425293LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (short)-25575;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = 6784984753768494701LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = -171197875830416879LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
