#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3625892583U;
int var_2 = -1725030856;
unsigned char var_4 = (unsigned char)188;
unsigned short var_6 = (unsigned short)63635;
unsigned long long int var_7 = 11172100987852247019ULL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_14 = 7986801971849072664LL;
signed char var_15 = (signed char)-21;
int zero = 0;
long long int var_18 = -3483842022062201048LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 5014281654633708262ULL;
int var_21 = -2023199010;
unsigned short var_22 = (unsigned short)48706;
unsigned long long int var_23 = 4986479259982252942ULL;
int arr_0 [10] ;
unsigned long long int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = -1819555768;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 9103572388484900370ULL;
}

void checksum() {
    hash(&seed, var_18);
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
