#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7661846262818310190ULL;
unsigned long long int var_4 = 1193362865791982110ULL;
unsigned long long int var_10 = 5903136728114274200ULL;
unsigned long long int var_12 = 4699617150510863748ULL;
unsigned long long int var_13 = 17332895083143847957ULL;
unsigned long long int var_14 = 9313685431496075963ULL;
unsigned long long int var_15 = 14264093761156644486ULL;
unsigned long long int var_16 = 12204007838545832050ULL;
int zero = 0;
unsigned long long int var_18 = 15526383008871764273ULL;
unsigned long long int var_19 = 13869048526369455704ULL;
unsigned long long int var_20 = 2237250820244626602ULL;
unsigned long long int var_21 = 15555054986018519132ULL;
unsigned long long int var_22 = 8569382314125143127ULL;
unsigned long long int var_23 = 8043364672912401265ULL;
unsigned long long int var_24 = 7528046738715657073ULL;
unsigned long long int var_25 = 7638181948574097666ULL;
unsigned long long int arr_0 [17] ;
unsigned long long int arr_2 [17] [17] [17] ;
unsigned long long int arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = 13356684589956475483ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 13022014290235821643ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 17777744363854664278ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
