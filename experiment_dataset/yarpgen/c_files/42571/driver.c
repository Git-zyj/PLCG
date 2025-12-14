#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2717200437369919489LL;
unsigned int var_1 = 1354132649U;
unsigned short var_2 = (unsigned short)34513;
unsigned short var_3 = (unsigned short)15399;
unsigned short var_4 = (unsigned short)53229;
int var_5 = 447471953;
unsigned long long int var_7 = 13945551667292880428ULL;
short var_11 = (short)-16085;
unsigned long long int var_12 = 18001179560624759094ULL;
unsigned short var_13 = (unsigned short)54912;
int var_14 = 917064985;
short var_16 = (short)12531;
int zero = 0;
long long int var_17 = -4950278976060428904LL;
unsigned long long int var_18 = 2670331304585036795ULL;
long long int var_19 = -7529400149826460557LL;
unsigned short var_20 = (unsigned short)63641;
unsigned long long int var_21 = 902646403596802405ULL;
unsigned long long int var_22 = 17791458040011362915ULL;
unsigned short arr_0 [23] ;
unsigned short arr_1 [23] ;
unsigned int arr_4 [17] [17] ;
unsigned long long int arr_2 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)40904;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned short)41883;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_4 [i_0] [i_1] = 1821396982U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = 12932814033974638701ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
