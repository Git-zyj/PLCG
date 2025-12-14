#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-16792;
int var_8 = 621311356;
unsigned int var_14 = 2872627043U;
unsigned short var_15 = (unsigned short)5823;
unsigned int var_16 = 306546443U;
unsigned long long int var_17 = 3918635909524171721ULL;
unsigned long long int var_18 = 5203337302825938734ULL;
int zero = 0;
unsigned int var_19 = 966594003U;
unsigned int var_20 = 3428127898U;
unsigned char var_21 = (unsigned char)55;
unsigned int var_22 = 409685252U;
long long int var_23 = 6074474040927304818LL;
signed char var_24 = (signed char)45;
unsigned short arr_3 [13] [13] ;
unsigned int arr_5 [13] [13] [13] [13] ;
unsigned long long int arr_11 [14] ;
long long int arr_14 [14] ;
unsigned int arr_19 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)65481;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 805275146U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 1845763758912039217ULL : 17531984741262753205ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = 1718412834685157776LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_19 [i_0] = (i_0 % 2 == 0) ? 412369427U : 1598186448U;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_19 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
