#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -651797788;
signed char var_4 = (signed char)-85;
unsigned long long int var_6 = 15263537737460700429ULL;
unsigned int var_10 = 2514943386U;
int var_13 = -13656510;
int zero = 0;
unsigned long long int var_17 = 9227651586476088565ULL;
unsigned long long int var_18 = 9451879148666362031ULL;
unsigned long long int var_19 = 7450611800682778929ULL;
short var_20 = (short)-5715;
_Bool arr_2 [15] ;
unsigned long long int arr_3 [15] ;
long long int arr_4 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 8489164966379622869ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -567171196048785560LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
