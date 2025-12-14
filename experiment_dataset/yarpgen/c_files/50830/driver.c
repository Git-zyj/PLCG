#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)160;
int var_1 = -1311911932;
long long int var_2 = -591709822472686141LL;
int var_4 = -351255860;
unsigned short var_7 = (unsigned short)65407;
unsigned char var_8 = (unsigned char)205;
int zero = 0;
long long int var_11 = -2794570976585323228LL;
int var_12 = 1280667535;
long long int var_13 = -1404224457006892244LL;
unsigned char var_14 = (unsigned char)175;
unsigned int var_15 = 3475234442U;
unsigned long long int arr_3 [22] ;
signed char arr_4 [22] ;
long long int arr_10 [22] [22] [22] [22] [22] ;
long long int arr_12 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 9677607893196946074ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = -6821821869414098386LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = 5277011448965962227LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_12 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
