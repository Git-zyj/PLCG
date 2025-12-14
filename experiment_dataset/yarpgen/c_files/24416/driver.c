#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3082280995U;
int var_2 = -165188485;
unsigned int var_3 = 549113231U;
unsigned int var_4 = 1699840975U;
unsigned int var_5 = 2139650451U;
unsigned int var_6 = 3132577204U;
int var_7 = 1207914091;
unsigned int var_8 = 471821383U;
short var_9 = (short)-27690;
int var_11 = -1628098948;
int var_12 = 279119950;
unsigned int var_14 = 2393484429U;
int var_15 = 617254840;
unsigned int var_16 = 196296593U;
int zero = 0;
int var_17 = 385580040;
unsigned int var_18 = 2078033006U;
unsigned int var_19 = 982703527U;
unsigned int var_20 = 3245938825U;
int var_21 = -1837944196;
unsigned int var_22 = 1882676294U;
unsigned int var_23 = 994442197U;
unsigned int var_24 = 3883622616U;
unsigned int var_25 = 506571584U;
unsigned int var_26 = 2627555073U;
unsigned int var_27 = 2527423207U;
unsigned int var_28 = 4293126828U;
short arr_0 [17] [17] ;
unsigned int arr_2 [17] [17] ;
short arr_3 [17] ;
unsigned int arr_9 [17] ;
unsigned int arr_15 [25] [25] ;
int arr_17 [21] ;
int arr_8 [17] ;
int arr_12 [17] [17] ;
short arr_13 [17] [17] [17] ;
int arr_16 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-30089;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 1478056172U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)14019;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = 3372149470U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_15 [i_0] [i_1] = 2067330619U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_17 [i_0] = -1574153750;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = -502572962;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_12 [i_0] [i_1] = 1952513089;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-12762;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 1069832580 : -1750003606;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_13 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
