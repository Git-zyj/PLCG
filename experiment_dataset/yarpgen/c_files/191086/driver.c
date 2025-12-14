#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
int var_1 = 123360958;
unsigned int var_7 = 2755405068U;
unsigned long long int var_9 = 8176998375563645350ULL;
unsigned long long int var_11 = 13226207511892292747ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)-127;
unsigned int var_14 = 3846210547U;
unsigned long long int var_15 = 1201687488139218033ULL;
long long int var_16 = -7929603132251305979LL;
unsigned long long int var_17 = 177037886417345911ULL;
_Bool var_18 = (_Bool)1;
long long int var_19 = 7952467457799457163LL;
signed char var_20 = (signed char)67;
long long int var_21 = 422237438876840079LL;
unsigned long long int arr_0 [15] [15] ;
long long int arr_4 [15] ;
unsigned int arr_6 [15] [15] ;
int arr_13 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = 12743022394581882968ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -1746310479359220349LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = 1347071827U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_13 [i_0] = 2118554375;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
