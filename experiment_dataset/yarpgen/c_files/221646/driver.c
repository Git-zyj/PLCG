#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)56031;
long long int var_4 = 9213812321506767327LL;
unsigned long long int var_7 = 11540868228860007376ULL;
unsigned long long int var_13 = 8753854211334772944ULL;
long long int var_16 = 3956229592553228285LL;
int zero = 0;
long long int var_18 = -3014227998471816138LL;
unsigned long long int var_19 = 12477728065089114697ULL;
unsigned long long int var_20 = 14741727932834932655ULL;
unsigned short var_21 = (unsigned short)46275;
long long int arr_0 [23] [23] ;
long long int arr_4 [23] ;
long long int arr_6 [25] ;
unsigned int arr_7 [25] ;
unsigned long long int arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = -3690520891277641297LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = -141317908162728317LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = -5108367761627603166LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = 3410938187U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 18419096716090212769ULL : 12823494338933701184ULL;
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
