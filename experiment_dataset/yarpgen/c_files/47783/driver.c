#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 15727283629372871129ULL;
unsigned int var_6 = 1290980571U;
unsigned long long int var_7 = 7342522220205859940ULL;
unsigned long long int var_12 = 12125222350324838548ULL;
unsigned long long int var_19 = 15673090034566402757ULL;
int zero = 0;
unsigned int var_20 = 439978472U;
unsigned long long int var_21 = 8321910528947775335ULL;
unsigned long long int var_22 = 3467046676658623568ULL;
unsigned int var_23 = 243622383U;
unsigned int var_24 = 1096784572U;
unsigned int var_25 = 3485686029U;
unsigned int var_26 = 1115403618U;
unsigned int var_27 = 1624771921U;
unsigned short arr_1 [20] ;
unsigned long long int arr_2 [20] ;
long long int arr_3 [20] ;
unsigned long long int arr_7 [20] ;
unsigned long long int arr_8 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)12181 : (unsigned short)19699;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 4798435953782723675ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 6568654266899411701LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = 8836653616343393608ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_8 [i_0] = 1696649140999330422ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
