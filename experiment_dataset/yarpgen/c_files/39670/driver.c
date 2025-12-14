#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 6455518096256071137LL;
signed char var_5 = (signed char)-26;
unsigned long long int var_10 = 8549507743916562855ULL;
int zero = 0;
unsigned long long int var_11 = 2888645640161883816ULL;
unsigned long long int var_12 = 331053974191233773ULL;
int var_13 = -844436675;
unsigned short var_14 = (unsigned short)4421;
int var_15 = -1647634622;
signed char var_16 = (signed char)46;
int var_17 = -1185584189;
short arr_3 [19] [19] ;
unsigned long long int arr_5 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-5212;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 10844717799131409241ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
