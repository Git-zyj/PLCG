#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3791196840713775232LL;
_Bool var_1 = (_Bool)1;
long long int var_4 = -3191358753980879850LL;
unsigned long long int var_5 = 3613631057838920009ULL;
_Bool var_6 = (_Bool)1;
int var_7 = 464365443;
long long int var_8 = 5846677642831184078LL;
short var_10 = (short)7377;
long long int var_11 = -5557429532038630706LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 6676326940677595149LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = 3187860524244075561LL;
long long int var_19 = -1105357587717251491LL;
long long int var_20 = 2353627373104451993LL;
unsigned int var_21 = 2754171839U;
int var_22 = 1647103078;
int var_23 = -482000696;
unsigned int var_24 = 3340351630U;
long long int var_25 = 3908902599961228131LL;
unsigned long long int var_26 = 4135776670788435100ULL;
short var_27 = (short)15871;
unsigned long long int var_28 = 7478931891411112042ULL;
int var_29 = -1452121612;
_Bool var_30 = (_Bool)0;
long long int var_31 = -3525035849214951051LL;
_Bool var_32 = (_Bool)0;
signed char var_33 = (signed char)28;
unsigned int var_34 = 2751305854U;
unsigned long long int var_35 = 4656224756551984672ULL;
int var_36 = -1711296672;
int var_37 = -1108220084;
int var_38 = 2125906745;
unsigned long long int arr_0 [16] ;
int arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
short arr_3 [16] [16] [16] ;
long long int arr_4 [16] [16] ;
int arr_5 [16] ;
long long int arr_7 [16] [16] ;
_Bool arr_9 [16] [16] [16] ;
unsigned long long int arr_10 [16] [16] ;
long long int arr_12 [16] [16] ;
_Bool arr_13 [16] ;
unsigned int arr_16 [16] ;
long long int arr_22 [16] ;
unsigned int arr_23 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2358737306650054163ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2064534971 : -272062346;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 12023135726580964992ULL : 6917762952819048732ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (short)-9146;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -8829647939331706947LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1742544090 : 1169030637;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = 6318590210708097178LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 16596625742949190613ULL : 16050845996770781143ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? -3114764393803798528LL : 826518678284186647LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1513458823U : 178993624U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 4708588592247363819LL : 5637396940254628682LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 1968951231U : 1549185462U;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
