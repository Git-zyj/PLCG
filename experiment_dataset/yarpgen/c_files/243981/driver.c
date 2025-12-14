#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13276970374947670328ULL;
signed char var_4 = (signed char)-21;
unsigned char var_9 = (unsigned char)120;
unsigned long long int var_11 = 5934998753109171634ULL;
unsigned int var_13 = 3787336537U;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned int var_21 = 905366013U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-11710;
unsigned long long int arr_0 [12] ;
unsigned long long int arr_2 [12] ;
int arr_4 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 6596966283231442496ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 5315002034749448773ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -1170581078;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
