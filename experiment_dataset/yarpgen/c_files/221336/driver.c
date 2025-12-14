#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5405152074208344333ULL;
int var_1 = -18900332;
short var_2 = (short)4061;
unsigned int var_3 = 2957351871U;
int var_4 = -526489765;
unsigned long long int var_5 = 6444519975377714358ULL;
int var_6 = 887805919;
unsigned long long int var_7 = 6874638308364422227ULL;
int var_8 = 1333383145;
unsigned long long int var_9 = 12576307134807190178ULL;
unsigned long long int var_10 = 2947482602600102993ULL;
unsigned long long int var_11 = 13081086390210652703ULL;
int var_13 = -1941435813;
short var_15 = (short)-15745;
short var_16 = (short)-30211;
int zero = 0;
unsigned int var_17 = 2831460995U;
unsigned int var_18 = 3553087241U;
unsigned int var_19 = 1930455250U;
int var_20 = -1695210767;
int var_21 = 755851612;
long long int var_22 = 4529096490662267690LL;
unsigned long long int var_23 = 12887359206024926895ULL;
unsigned int arr_2 [13] ;
long long int arr_3 [13] [13] [13] ;
unsigned long long int arr_4 [13] [13] ;
unsigned short arr_7 [13] [13] [13] [13] [13] ;
unsigned short arr_9 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 751600309U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -6859841257356159364LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = 4594811326877923535ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_7 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)32853;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41338;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
