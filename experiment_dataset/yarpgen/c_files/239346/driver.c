#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3985507384U;
unsigned char var_4 = (unsigned char)195;
unsigned int var_6 = 703850655U;
int var_7 = -1143985395;
unsigned char var_8 = (unsigned char)137;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)177;
int zero = 0;
signed char var_11 = (signed char)-11;
unsigned short var_12 = (unsigned short)60618;
signed char var_13 = (signed char)-115;
unsigned short var_14 = (unsigned short)36373;
_Bool var_15 = (_Bool)0;
int arr_5 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -757495781;
}

void checksum() {
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
