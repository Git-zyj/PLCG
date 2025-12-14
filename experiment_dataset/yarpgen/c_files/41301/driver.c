#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5830157989153855070ULL;
unsigned long long int var_1 = 7811340046628141402ULL;
unsigned int var_2 = 3703657605U;
long long int var_3 = 7605379775099094078LL;
long long int var_4 = 953473100116022999LL;
long long int var_5 = -4463388113208994038LL;
unsigned long long int var_6 = 12385510625353809681ULL;
long long int var_7 = -2905764351477642287LL;
long long int var_8 = 2018234895320193737LL;
long long int var_9 = -8186946733251174364LL;
long long int var_11 = -2648668072247376942LL;
unsigned long long int var_12 = 2412654787725552988ULL;
long long int var_13 = -5266521201249812236LL;
unsigned long long int var_14 = 12648120054244029367ULL;
long long int var_15 = 6026644781072024999LL;
unsigned int var_16 = 789443916U;
unsigned long long int var_17 = 4300548312848517521ULL;
unsigned long long int var_18 = 9868830929219373758ULL;
unsigned int var_19 = 3825050811U;
int zero = 0;
unsigned int var_20 = 726686897U;
long long int var_21 = 8070565354858435949LL;
long long int var_22 = -4426714295825495286LL;
unsigned long long int var_23 = 14775533811934988574ULL;
unsigned long long int var_24 = 598725054673829938ULL;
unsigned int var_25 = 2595926220U;
unsigned int var_26 = 2143832604U;
unsigned int var_27 = 4171953069U;
long long int var_28 = 5794074729577328319LL;
unsigned long long int var_29 = 11864896976807994434ULL;
unsigned long long int var_30 = 7970837713994467380ULL;
long long int var_31 = -4684121299198355094LL;
unsigned long long int var_32 = 2661408644471181767ULL;
unsigned long long int var_33 = 3335112591485490958ULL;
long long int arr_2 [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_7 [20] ;
unsigned long long int arr_13 [20] [20] [20] [20] [20] [20] ;
long long int arr_23 [12] [12] [12] ;
long long int arr_24 [12] ;
unsigned long long int arr_25 [12] [12] ;
long long int arr_34 [12] ;
long long int arr_35 [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -6725210192521988111LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 4748792525818129819LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 368951047270288574ULL : 17798143401734502252ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? 5675987207951039516ULL : 17062912254325523256ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -3542940155291653878LL : -6736494283731975212LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 5081784513694917904LL : 9096286078329036498LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_25 [i_0] [i_1] = 12675888052581499143ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_34 [i_0] = 2102036726984380494LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] = -1842080564826255744LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 20; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 20; ++i_5) 
                            hash(&seed, arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
