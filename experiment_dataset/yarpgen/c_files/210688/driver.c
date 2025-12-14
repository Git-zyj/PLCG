#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13384476273940136320ULL;
unsigned long long int var_1 = 14859090520461951271ULL;
signed char var_2 = (signed char)-81;
unsigned int var_3 = 1365401002U;
unsigned char var_4 = (unsigned char)69;
long long int var_7 = 56553565475513150LL;
long long int var_10 = 8660526633605270333LL;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 12782686610716973573ULL;
unsigned long long int var_18 = 9056279664156190435ULL;
signed char var_19 = (signed char)-51;
int var_20 = 80904963;
long long int var_21 = 215963608650221623LL;
unsigned char var_22 = (unsigned char)167;
unsigned long long int var_23 = 9566738656617792832ULL;
unsigned long long int var_24 = 13267791285218026282ULL;
short arr_0 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-11592;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
