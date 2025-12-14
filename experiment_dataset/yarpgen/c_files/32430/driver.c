#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2652658665395713563LL;
unsigned int var_3 = 4134046588U;
long long int var_4 = -4131547919023985987LL;
long long int var_7 = -2579723893922880851LL;
short var_8 = (short)-13362;
unsigned long long int var_9 = 15584655693935900124ULL;
short var_11 = (short)11370;
short var_12 = (short)-1560;
int zero = 0;
unsigned long long int var_13 = 6046496514794689945ULL;
unsigned long long int var_14 = 13609746526844700178ULL;
short var_15 = (short)17594;
short var_16 = (short)32099;
long long int var_17 = -4284880418364002585LL;
unsigned long long int var_18 = 9246076428797467140ULL;
long long int arr_2 [21] ;
short arr_3 [21] ;
short arr_4 [21] [21] [21] ;
long long int arr_5 [21] [21] ;
short arr_6 [21] [21] [21] [21] ;
short arr_7 [21] [21] [21] ;
long long int arr_10 [22] ;
short arr_11 [22] ;
short arr_12 [22] ;
short arr_14 [22] ;
short arr_15 [22] [22] ;
short arr_20 [22] ;
unsigned long long int arr_21 [22] [22] [22] ;
long long int arr_22 [22] ;
unsigned int arr_8 [21] [21] [21] ;
unsigned int arr_9 [21] ;
short arr_13 [22] ;
short arr_16 [22] [22] ;
short arr_17 [22] ;
unsigned int arr_23 [22] [22] [22] [22] ;
unsigned long long int arr_24 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = -994710483882275453LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (short)10315;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)23532;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_5 [i_0] [i_1] = -2227968533092595432LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)-26963 : (short)1762;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)-13438;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = -3837808444690642858LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_11 [i_0] = (short)-24985;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_12 [i_0] = (short)12235;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_14 [i_0] = (short)29788;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-32304;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_20 [i_0] = (short)-29456;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 11051349119361489389ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? 5009352766709413363LL : 1945176036842252907LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2684550093U : 352744973U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 3581199565U : 411947807U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_13 [i_0] = (short)-12111;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-16299;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_17 [i_0] = (short)22304;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 2920185122U : 3116434341U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_24 [i_0] = 3081845034909638378ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_13 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_24 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
