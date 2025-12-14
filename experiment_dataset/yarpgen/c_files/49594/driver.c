#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1824382874;
unsigned long long int var_1 = 5160174554161585283ULL;
unsigned short var_2 = (unsigned short)29163;
unsigned int var_3 = 3234828726U;
unsigned long long int var_4 = 10778803714629241163ULL;
short var_5 = (short)31624;
unsigned long long int var_6 = 16004135374082091775ULL;
long long int var_8 = 2170500114857361738LL;
signed char var_9 = (signed char)-70;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = -89579549;
unsigned short var_15 = (unsigned short)4251;
unsigned short var_16 = (unsigned short)21643;
unsigned short var_17 = (unsigned short)29811;
_Bool var_18 = (_Bool)1;
unsigned short arr_0 [16] ;
short arr_2 [16] ;
int arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)63948;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)-14584;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = -699709416;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
