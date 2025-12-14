#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)194;
unsigned int var_3 = 3954192524U;
unsigned char var_4 = (unsigned char)195;
signed char var_5 = (signed char)31;
signed char var_6 = (signed char)-113;
int var_10 = 1214607421;
signed char var_11 = (signed char)-38;
unsigned short var_12 = (unsigned short)17864;
int zero = 0;
unsigned long long int var_15 = 7372424311134261751ULL;
unsigned short var_16 = (unsigned short)48084;
long long int var_17 = -671069841341384400LL;
unsigned long long int var_18 = 9407148661532597762ULL;
signed char var_19 = (signed char)-118;
int arr_0 [15] ;
short arr_2 [15] [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = -1176630700;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (short)5661;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -1089456871;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
