#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)54242;
unsigned long long int var_3 = 8720624865487931165ULL;
unsigned long long int var_6 = 12311969974153687524ULL;
unsigned short var_9 = (unsigned short)20771;
unsigned char var_10 = (unsigned char)163;
signed char var_16 = (signed char)54;
unsigned long long int var_17 = 14077329212157176181ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)30648;
unsigned int var_20 = 911427542U;
long long int var_21 = 2886403309466545533LL;
unsigned short var_22 = (unsigned short)50890;
unsigned short var_23 = (unsigned short)17411;
unsigned short arr_0 [10] ;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)1208 : (unsigned short)56761;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 3544349447U;
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
