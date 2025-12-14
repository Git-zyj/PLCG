#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3281435446U;
unsigned int var_1 = 1367198549U;
unsigned int var_2 = 2449116433U;
unsigned int var_3 = 70555779U;
unsigned int var_4 = 3201171131U;
unsigned int var_5 = 653051798U;
unsigned int var_6 = 1831528767U;
unsigned int var_7 = 2848080177U;
unsigned int var_8 = 821036310U;
unsigned int var_9 = 808772263U;
unsigned int var_10 = 2223810298U;
unsigned int var_11 = 1413158704U;
unsigned int var_12 = 2950771188U;
int zero = 0;
unsigned int var_13 = 1702966981U;
unsigned int var_14 = 2702776111U;
unsigned int var_15 = 2444785033U;
unsigned int var_16 = 2112403956U;
unsigned int var_17 = 1735229569U;
unsigned int var_18 = 3368792605U;
unsigned int var_19 = 1609749753U;
unsigned int var_20 = 486533161U;
unsigned int var_21 = 1383363000U;
unsigned int var_22 = 1118996011U;
unsigned int var_23 = 1462296545U;
unsigned int var_24 = 1508814159U;
unsigned int var_25 = 34923153U;
unsigned int var_26 = 1863141019U;
unsigned int var_27 = 2703848799U;
unsigned int var_28 = 396670702U;
unsigned int arr_0 [19] ;
unsigned int arr_1 [19] ;
unsigned int arr_2 [19] ;
unsigned int arr_3 [19] [19] ;
unsigned int arr_4 [19] ;
unsigned int arr_5 [19] ;
unsigned int arr_8 [19] ;
unsigned int arr_9 [19] [19] ;
unsigned int arr_13 [19] [19] [19] [19] ;
unsigned int arr_14 [19] [19] [19] [19] ;
unsigned int arr_19 [19] ;
unsigned int arr_20 [19] [19] ;
unsigned int arr_24 [21] ;
unsigned int arr_25 [21] ;
unsigned int arr_26 [21] ;
unsigned int arr_27 [21] ;
unsigned int arr_28 [21] ;
unsigned int arr_29 [21] ;
unsigned int arr_31 [21] ;
unsigned int arr_6 [19] [19] [19] ;
unsigned int arr_7 [19] [19] [19] ;
unsigned int arr_10 [19] [19] ;
unsigned int arr_11 [19] ;
unsigned int arr_12 [19] ;
unsigned int arr_15 [19] [19] ;
unsigned int arr_16 [19] ;
unsigned int arr_23 [19] [19] [19] ;
unsigned int arr_32 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 2105391523U : 496927423U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 4026745256U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 1770329736U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 2134323070U : 3220699114U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = 1523590621U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = 2690986274U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 3249852546U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_9 [i_0] [i_1] = 676243693U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 946764342U : 1135365460U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_14 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 3257926900U : 1356152969U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 2706578806U : 1554684127U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? 2069515352U : 3966115985U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = 1754997649U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = 4130837188U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_26 [i_0] = 2067337730U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 2326463427U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_28 [i_0] = 1258553780U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = 2004738565U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_31 [i_0] = 1705827864U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 288779993U : 3458641883U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3680020543U : 236002175U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 61195967U : 4200975778U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 2223100541U : 150412754U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? 3569924698U : 2871343599U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? 429371443U : 2033940067U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 2433758758U : 3854790137U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 335855310U : 1319013762U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_32 [i_0] = 1588333939U;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_32 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
