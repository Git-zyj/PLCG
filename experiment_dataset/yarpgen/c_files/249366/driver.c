#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1624764558111687083LL;
int var_1 = -197660244;
unsigned long long int var_3 = 14288985062218485056ULL;
unsigned long long int var_4 = 3463931865926978773ULL;
_Bool var_5 = (_Bool)1;
long long int var_6 = -5055972928088369753LL;
long long int var_7 = -878039919651880755LL;
signed char var_8 = (signed char)-60;
short var_9 = (short)-2612;
unsigned char var_11 = (unsigned char)206;
int var_14 = 177495475;
unsigned long long int var_17 = 12301127488996349064ULL;
unsigned char var_18 = (unsigned char)29;
unsigned long long int var_19 = 11342849432887337476ULL;
int zero = 0;
short var_20 = (short)313;
unsigned int var_21 = 3528420246U;
unsigned long long int var_22 = 9332313146000827673ULL;
short var_23 = (short)-20564;
unsigned short var_24 = (unsigned short)50281;
short var_25 = (short)-14765;
unsigned int var_26 = 4138851664U;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
int arr_3 [19] [19] ;
unsigned long long int arr_4 [19] ;
unsigned int arr_6 [19] ;
short arr_10 [19] [19] [19] [19] [19] ;
unsigned long long int arr_11 [19] ;
unsigned long long int arr_12 [19] [19] [19] [19] [19] [19] [19] ;
int arr_13 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 3621163902116307222LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 5036534370496539380ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = -1410419348;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 10042700528706715832ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = 317758654U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-13384 : (short)32519;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13922486904716477004ULL : 8059782373250211599ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 19; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = 10757589444857643777ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 488618748 : -1957474439;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
