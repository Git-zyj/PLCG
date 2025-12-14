#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)63;
unsigned long long int var_8 = 5768137142284561647ULL;
int zero = 0;
unsigned int var_13 = 4050336195U;
unsigned short var_14 = (unsigned short)11604;
unsigned long long int var_15 = 4091460437420551271ULL;
signed char var_16 = (signed char)-98;
unsigned long long int var_17 = 11371581118576467704ULL;
unsigned int var_18 = 2719178669U;
int var_19 = 471075078;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)18;
unsigned short var_22 = (unsigned short)50080;
int var_23 = 1985353909;
unsigned int var_24 = 2703218130U;
_Bool var_25 = (_Bool)0;
signed char var_26 = (signed char)-34;
unsigned int var_27 = 894158216U;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 1182839188U;
int arr_17 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 984798517;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
