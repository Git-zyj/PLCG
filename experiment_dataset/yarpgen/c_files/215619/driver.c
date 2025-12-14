#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3427261360336265308ULL;
long long int var_2 = -6064832383581697362LL;
unsigned long long int var_3 = 14053757514559566146ULL;
unsigned long long int var_4 = 2280199681232075798ULL;
int var_5 = -356057241;
long long int var_6 = -4588989713443101211LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 16760470175758340111ULL;
long long int var_9 = 3817829776595746342LL;
_Bool var_12 = (_Bool)1;
short var_13 = (short)3951;
unsigned int var_14 = 355677469U;
unsigned long long int var_16 = 9512850242725245267ULL;
short var_18 = (short)-27587;
int zero = 0;
unsigned long long int var_19 = 7676123893008146318ULL;
unsigned int var_20 = 3693096911U;
unsigned int var_21 = 3533762475U;
int var_22 = -1186349544;
_Bool var_23 = (_Bool)0;
short var_24 = (short)5477;
unsigned int var_25 = 242820876U;
unsigned long long int var_26 = 10626194383228437740ULL;
_Bool arr_0 [10] [10] ;
long long int arr_1 [10] [10] ;
int arr_2 [10] [10] ;
_Bool arr_3 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 1614712056245371149LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -1447875238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 11830176371012139763ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
