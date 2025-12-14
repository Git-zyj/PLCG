#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 7727090907016316751LL;
long long int var_6 = -3462010426973984386LL;
long long int var_7 = -1649071210898428947LL;
unsigned int var_10 = 3416502176U;
unsigned short var_11 = (unsigned short)58118;
short var_14 = (short)-29728;
unsigned char var_15 = (unsigned char)98;
unsigned short var_17 = (unsigned short)31993;
int zero = 0;
unsigned long long int var_18 = 13074575867557969409ULL;
long long int var_19 = 5023479738897050567LL;
unsigned int var_20 = 4277370694U;
unsigned char var_21 = (unsigned char)51;
short var_22 = (short)18033;
int arr_5 [19] [19] ;
_Bool arr_6 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 383577559 : -53194215;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
