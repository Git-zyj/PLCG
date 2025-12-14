#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7219609283862247234LL;
signed char var_6 = (signed char)-85;
short var_7 = (short)-27713;
unsigned long long int var_8 = 11149552200075514146ULL;
signed char var_15 = (signed char)40;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)9282;
unsigned long long int var_21 = 937928588329922958ULL;
unsigned char var_22 = (unsigned char)241;
unsigned int var_23 = 3152171046U;
signed char arr_1 [13] ;
unsigned long long int arr_3 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)18;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 10033487288592746028ULL;
}

void checksum() {
    hash(&seed, var_19);
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
