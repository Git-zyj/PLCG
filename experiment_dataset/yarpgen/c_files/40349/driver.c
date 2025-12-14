#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-13;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 17883966569444349599ULL;
unsigned long long int var_11 = 7004712304495139551ULL;
int zero = 0;
short var_18 = (short)23411;
short var_19 = (short)20580;
int var_20 = -593522975;
unsigned long long int var_21 = 12265451472842214342ULL;
signed char var_22 = (signed char)67;
unsigned long long int var_23 = 18005372697367545166ULL;
unsigned long long int var_24 = 2347454949595408602ULL;
long long int var_25 = 7644984451844885664LL;
signed char var_26 = (signed char)100;
signed char arr_0 [25] ;
long long int arr_1 [25] [25] ;
unsigned char arr_2 [25] ;
long long int arr_3 [25] [25] ;
long long int arr_4 [25] ;
unsigned int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = -1172438160284572297LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_3 [i_0] [i_1] = 5069966829042767321LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 7404423347972063563LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 2700102738U;
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
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
