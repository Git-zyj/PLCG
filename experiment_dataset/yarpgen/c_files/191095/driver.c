#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -298785480238168837LL;
unsigned char var_4 = (unsigned char)156;
int var_6 = -1979117601;
unsigned char var_9 = (unsigned char)37;
signed char var_16 = (signed char)-35;
unsigned long long int var_17 = 11105805516331231811ULL;
int zero = 0;
int var_20 = -360775484;
unsigned int var_21 = 868624717U;
unsigned long long int var_22 = 7643793423940933038ULL;
int var_23 = 461673907;
unsigned int arr_0 [22] ;
unsigned char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 183645226U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)44;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
