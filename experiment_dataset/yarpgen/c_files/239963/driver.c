#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8827170165577298300LL;
long long int var_2 = 3816730131856439781LL;
int var_4 = 1079442997;
unsigned short var_5 = (unsigned short)17801;
int var_6 = 1160176244;
unsigned short var_8 = (unsigned short)48926;
unsigned short var_11 = (unsigned short)44249;
long long int var_13 = 8943980378384068966LL;
unsigned short var_15 = (unsigned short)36401;
int var_18 = -406943975;
int zero = 0;
unsigned short var_19 = (unsigned short)42413;
unsigned short var_20 = (unsigned short)29830;
long long int var_21 = -623813262315726002LL;
unsigned short var_22 = (unsigned short)28076;
unsigned short var_23 = (unsigned short)39434;
unsigned short var_24 = (unsigned short)3991;
int var_25 = -132745799;
unsigned short var_26 = (unsigned short)43580;
unsigned short arr_0 [22] [22] ;
long long int arr_1 [22] ;
int arr_2 [22] ;
unsigned short arr_3 [22] [22] ;
long long int arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)44787;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? -6665838640272090644LL : 6292398568434887730LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 2108696950 : -633529603;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)20574;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -4420997067149483866LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
