#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6613951647039573278LL;
short var_3 = (short)26672;
int var_5 = 1028702531;
int var_6 = 105940703;
int var_10 = 1383289773;
long long int var_11 = -5164136510729899156LL;
int zero = 0;
long long int var_13 = -8183711915958760926LL;
int var_14 = 741187541;
long long int var_15 = -4276681090316952956LL;
int var_16 = -133044113;
int var_17 = 1143806503;
unsigned int var_18 = 208979021U;
long long int arr_1 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? 9201179331003856487LL : 6327226085248848919LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
