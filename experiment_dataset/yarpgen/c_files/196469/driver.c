#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1242033613;
unsigned short var_5 = (unsigned short)3516;
int var_7 = -1902396972;
int var_9 = 824963496;
int var_11 = -1401980294;
int zero = 0;
unsigned long long int var_15 = 13102361550944144448ULL;
signed char var_16 = (signed char)-33;
unsigned int var_17 = 1697908738U;
unsigned short var_18 = (unsigned short)35815;
unsigned int var_19 = 1557772830U;
unsigned long long int var_20 = 2806727857592956442ULL;
unsigned long long int arr_0 [12] ;
unsigned short arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 11771323970815091826ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)47026;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
