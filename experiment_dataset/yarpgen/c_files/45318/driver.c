#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
int zero = 0;
signed char var_13 = (signed char)74;
long long int var_14 = -952194958444232289LL;
unsigned long long int var_15 = 9308694596691540841ULL;
int var_16 = -1761761384;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)177;
unsigned long long int var_19 = 18287245396459281371ULL;
_Bool var_20 = (_Bool)1;
int var_21 = -317695078;
int var_22 = 550181601;
long long int var_23 = 5108954498293568615LL;
unsigned short var_24 = (unsigned short)39742;
short var_25 = (short)-2503;
unsigned long long int var_26 = 3969017794560217671ULL;
unsigned long long int var_27 = 482304315306442430ULL;
long long int var_28 = -2339806415178227888LL;
unsigned short var_29 = (unsigned short)11669;
signed char var_30 = (signed char)119;
long long int var_31 = -7282498247541649816LL;
long long int arr_4 [24] ;
short arr_14 [17] [17] ;
_Bool arr_24 [17] [17] [17] ;
short arr_25 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -7440169531908527706LL : -7531513152433190052LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-23469;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_25 [i_0] = (short)-28323;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_25 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
