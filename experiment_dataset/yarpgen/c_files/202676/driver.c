#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4525;
int var_4 = -909434800;
long long int var_7 = -4577838388100668611LL;
long long int var_8 = -525979283676432146LL;
signed char var_9 = (signed char)-68;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned char var_12 = (unsigned char)183;
unsigned char var_13 = (unsigned char)80;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 2580060161U;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-31722;
long long int var_18 = -8318374178881621828LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 2781660912U;
unsigned long long int var_21 = 6782646367184128756ULL;
int var_22 = 927155896;
unsigned int arr_1 [22] ;
unsigned int arr_4 [22] ;
int arr_8 [22] [22] [22] ;
signed char arr_9 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2854691017U : 3375625693U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 2895347927U : 4147551259U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = -620357444;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-73 : (signed char)-63;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
