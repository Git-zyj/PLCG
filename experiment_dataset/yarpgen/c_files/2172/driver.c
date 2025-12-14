#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 530454461;
short var_2 = (short)-12586;
short var_3 = (short)21394;
signed char var_6 = (signed char)121;
short var_13 = (short)-29364;
unsigned long long int var_17 = 3515039720678731425ULL;
int zero = 0;
long long int var_18 = 5348517539940213896LL;
unsigned long long int var_19 = 2530585913779663448ULL;
int var_20 = 242857874;
long long int var_21 = -6494578272734589755LL;
int var_22 = -1285487005;
short var_23 = (short)31281;
short arr_0 [21] ;
short arr_2 [21] ;
unsigned long long int arr_3 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)774 : (short)-19708;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (short)10530;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 8719868938220549008ULL : 11178578280935417034ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)11 : (signed char)-85;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
