#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4810001816268095981LL;
long long int var_3 = 5827031820760084109LL;
long long int var_9 = -638060061360205591LL;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_18 = (unsigned short)40427;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2546821578U;
long long int var_21 = -1988101771654147044LL;
long long int arr_0 [18] ;
short arr_4 [18] [18] [18] ;
unsigned long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = -3550712850549033848LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-10759 : (short)-21424;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 14822900386955903350ULL;
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
