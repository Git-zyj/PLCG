#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-19534;
long long int var_1 = 7729867953563427028LL;
long long int var_2 = 4112446310982330781LL;
long long int var_3 = -8041242319931600259LL;
long long int var_4 = 243091024339803370LL;
unsigned char var_5 = (unsigned char)249;
long long int var_9 = -3322200543993475131LL;
int var_10 = -236323238;
int zero = 0;
unsigned long long int var_12 = 7436091011027136620ULL;
short var_13 = (short)1495;
long long int var_14 = -8006483344083882290LL;
unsigned short var_15 = (unsigned short)19920;
unsigned long long int var_16 = 17338289650122757190ULL;
short var_17 = (short)-531;
long long int arr_0 [19] [19] ;
long long int arr_4 [19] ;
long long int arr_7 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_0 [i_0] [i_1] = 4119287002833346166LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = -8462366014140537482LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = -4432481457810328859LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
