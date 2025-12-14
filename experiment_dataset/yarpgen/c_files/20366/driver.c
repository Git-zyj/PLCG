#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2184626485520959776ULL;
unsigned char var_4 = (unsigned char)145;
unsigned long long int var_5 = 12789948229621046779ULL;
signed char var_6 = (signed char)63;
unsigned long long int var_9 = 17211951908926906128ULL;
signed char var_11 = (signed char)-40;
int zero = 0;
unsigned char var_19 = (unsigned char)118;
unsigned long long int var_20 = 14788334772975789171ULL;
unsigned long long int var_21 = 2646733260409740701ULL;
unsigned short var_22 = (unsigned short)47107;
signed char arr_0 [22] ;
unsigned long long int arr_1 [22] ;
unsigned short arr_2 [22] ;
unsigned long long int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (signed char)-73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 15921478146990606068ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)64680;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 17881451700517617512ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
