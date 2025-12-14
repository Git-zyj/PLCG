#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)4200;
short var_5 = (short)-20082;
long long int var_8 = -5844980815525276122LL;
unsigned long long int var_13 = 2042476966846832196ULL;
int zero = 0;
short var_18 = (short)2952;
unsigned long long int var_19 = 18366805924568920102ULL;
unsigned long long int var_20 = 18427240430882685158ULL;
unsigned long long int var_21 = 2896550860161352297ULL;
unsigned long long int arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 13671688456139256522ULL : 15250160284520710990ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
