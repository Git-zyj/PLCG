#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)51556;
unsigned long long int var_1 = 18103584006081313240ULL;
short var_5 = (short)21462;
int var_7 = -860277474;
unsigned short var_8 = (unsigned short)25233;
_Bool var_9 = (_Bool)1;
short var_12 = (short)-25689;
unsigned int var_13 = 1565613295U;
int zero = 0;
signed char var_15 = (signed char)-108;
short var_16 = (short)-27717;
unsigned short var_17 = (unsigned short)58916;
short var_18 = (short)-7886;
unsigned long long int var_19 = 9153663180835895669ULL;
unsigned int var_20 = 489934205U;
short var_21 = (short)27203;
unsigned short var_22 = (unsigned short)34762;
unsigned long long int var_23 = 7189587654233595014ULL;
short arr_4 [24] [24] ;
signed char arr_5 [24] ;
unsigned int arr_6 [24] [24] ;
short arr_8 [24] ;
int arr_9 [24] [24] [24] [24] [24] [24] ;
signed char arr_12 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-7455;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? 609705790U : 447782070U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (short)30146;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -1757896190 : -941856535;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = (signed char)101;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
