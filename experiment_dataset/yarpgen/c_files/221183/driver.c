#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9749939752392700783ULL;
int var_2 = -744953420;
int var_4 = -1586700598;
unsigned char var_5 = (unsigned char)104;
unsigned short var_6 = (unsigned short)37717;
unsigned char var_7 = (unsigned char)0;
unsigned short var_9 = (unsigned short)2820;
int zero = 0;
long long int var_10 = 5242953694330088098LL;
int var_11 = 2121216232;
_Bool var_12 = (_Bool)1;
int var_13 = -736284074;
signed char var_14 = (signed char)75;
unsigned long long int var_15 = 1057044460076167117ULL;
long long int arr_2 [10] ;
unsigned short arr_3 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3435609371080304915LL : -5432916570947803160LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)15711;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
