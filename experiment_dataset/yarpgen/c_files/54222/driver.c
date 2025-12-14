#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2097151338U;
unsigned int var_1 = 4057121823U;
unsigned long long int var_2 = 4313957225402343560ULL;
int var_4 = 753726676;
unsigned short var_5 = (unsigned short)45387;
_Bool var_8 = (_Bool)1;
long long int var_9 = 6428240402632157238LL;
int zero = 0;
signed char var_12 = (signed char)20;
unsigned short var_13 = (unsigned short)36749;
unsigned char var_14 = (unsigned char)223;
unsigned long long int var_15 = 17394392603576487901ULL;
long long int arr_1 [10] ;
int arr_2 [10] [10] [10] ;
long long int arr_3 [10] ;
unsigned long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3955896025567412632LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -855264135;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -894661949878239898LL : -1878883046174197680LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9692095990082480786ULL : 13500782108130897292ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
