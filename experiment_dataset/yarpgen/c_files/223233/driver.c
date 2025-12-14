#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-84;
short var_4 = (short)-26953;
short var_5 = (short)-11823;
unsigned long long int var_7 = 10097301216638023819ULL;
unsigned char var_8 = (unsigned char)111;
unsigned int var_11 = 1817065694U;
unsigned char var_13 = (unsigned char)27;
int zero = 0;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-19899;
int var_17 = -1751352823;
unsigned long long int var_18 = 13033537667174055564ULL;
int var_19 = -184091939;
unsigned long long int var_20 = 12007070403144023445ULL;
unsigned int arr_0 [22] [22] ;
unsigned long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 3838235791U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 2393601580519492623ULL : 3373896736187115639ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
