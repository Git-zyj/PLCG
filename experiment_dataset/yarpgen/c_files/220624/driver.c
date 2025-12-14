#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1062797399835706561LL;
long long int var_3 = 3201159750370133446LL;
long long int var_7 = -2537981809198549357LL;
int zero = 0;
unsigned long long int var_20 = 5609690580813129677ULL;
long long int var_21 = -1722840291195489612LL;
unsigned long long int var_22 = 16994880991575236803ULL;
unsigned long long int var_23 = 9687256421810512707ULL;
long long int var_24 = 7859656562830366422LL;
unsigned long long int var_25 = 14812448541038248774ULL;
unsigned long long int arr_0 [15] ;
long long int arr_1 [15] ;
signed char arr_3 [15] [15] ;
unsigned long long int arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 8089337782661746211ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 1813250940711907839LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = 7074715618111941991ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
