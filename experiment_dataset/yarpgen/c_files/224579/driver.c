#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-9850;
int zero = 0;
unsigned long long int var_17 = 15945046005345861257ULL;
unsigned long long int var_18 = 12304808229671198026ULL;
int var_19 = 1189361615;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2338629017U;
int var_22 = 602310345;
unsigned long long int var_23 = 11489342626892343854ULL;
unsigned int arr_0 [24] ;
short arr_2 [24] ;
unsigned char arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 4198254706U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-20917;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)44 : (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? 3016439347689710235ULL : 17596625312863954718ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
