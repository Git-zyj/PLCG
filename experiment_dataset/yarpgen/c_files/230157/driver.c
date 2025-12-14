#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 160878792;
unsigned int var_3 = 465159364U;
unsigned long long int var_4 = 5212676965207773124ULL;
unsigned char var_7 = (unsigned char)84;
int var_10 = 1680353115;
int var_11 = 728802202;
int zero = 0;
unsigned long long int var_14 = 13398630250789282217ULL;
unsigned short var_15 = (unsigned short)16453;
unsigned long long int var_16 = 2702586606248153791ULL;
unsigned long long int var_17 = 18411920042851510374ULL;
unsigned int arr_8 [20] [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 3613147847U;
}

void checksum() {
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
