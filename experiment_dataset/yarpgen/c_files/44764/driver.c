#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5632413697767436396LL;
int var_1 = 702813187;
int var_2 = -1403190600;
long long int var_3 = 363262773582514611LL;
int var_4 = -954333228;
unsigned char var_6 = (unsigned char)156;
unsigned long long int var_8 = 9549867316975883223ULL;
long long int var_11 = -4912115915165026954LL;
unsigned int var_12 = 1503887682U;
signed char var_16 = (signed char)-19;
int zero = 0;
signed char var_18 = (signed char)15;
unsigned char var_19 = (unsigned char)252;
unsigned char var_20 = (unsigned char)226;
unsigned char var_21 = (unsigned char)113;
unsigned int arr_0 [23] [23] ;
signed char arr_1 [23] ;
int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = 2469986880U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -1208739560;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
