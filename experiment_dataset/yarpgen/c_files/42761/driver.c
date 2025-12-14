#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 18432712459376857883ULL;
unsigned long long int var_12 = 7855201820193423276ULL;
int zero = 0;
unsigned long long int var_15 = 987972967988570658ULL;
unsigned long long int var_16 = 6251367278918677214ULL;
unsigned long long int var_17 = 6083482416056704959ULL;
unsigned long long int var_18 = 10545558868645707338ULL;
unsigned long long int var_19 = 5605798679323064322ULL;
unsigned long long int var_20 = 12754991955375488190ULL;
unsigned long long int var_21 = 18236118678265140905ULL;
unsigned long long int var_22 = 13416321257500564628ULL;
unsigned long long int arr_0 [23] ;
unsigned long long int arr_1 [23] [23] ;
unsigned long long int arr_6 [23] [23] [23] ;
unsigned long long int arr_7 [23] [23] ;
unsigned long long int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = 9278353086323603896ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_1 [i_0] [i_1] = 8488482387990742525ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 884134711723072763ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_7 [i_0] [i_1] = 15461022106086036958ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 15573687966696689514ULL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
