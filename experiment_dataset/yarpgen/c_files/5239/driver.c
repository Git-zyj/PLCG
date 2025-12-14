#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1110484749779495240LL;
unsigned long long int var_1 = 933970863012645163ULL;
unsigned long long int var_5 = 15507872915645915623ULL;
long long int var_6 = -8351860154440103049LL;
unsigned int var_7 = 1850327596U;
unsigned short var_10 = (unsigned short)51699;
unsigned int var_11 = 751525302U;
unsigned long long int var_12 = 16009280379168811500ULL;
unsigned short var_13 = (unsigned short)39617;
short var_14 = (short)26803;
long long int var_15 = -1028748654913946251LL;
int zero = 0;
unsigned long long int var_16 = 6535111019000990215ULL;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 11441216760111069473ULL;
short var_19 = (short)-15084;
int var_20 = 849385833;
int var_21 = -1659435659;
long long int var_22 = -4577830550506455153LL;
unsigned short var_23 = (unsigned short)51781;
_Bool var_24 = (_Bool)1;
long long int var_25 = 7790451901462801325LL;
short arr_1 [15] ;
long long int arr_3 [20] ;
unsigned long long int arr_4 [20] ;
long long int arr_2 [15] ;
_Bool arr_7 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)-16654;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 7270168955078097812LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 8312858653164711510ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 2359253297317790375LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
