#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8243303138669601952ULL;
unsigned long long int var_5 = 9490411935137848856ULL;
unsigned int var_6 = 3254044736U;
signed char var_7 = (signed char)-25;
long long int var_9 = 3979435039993931435LL;
unsigned short var_10 = (unsigned short)29375;
unsigned short var_11 = (unsigned short)52800;
unsigned long long int var_14 = 2327779093238022175ULL;
unsigned short var_15 = (unsigned short)40698;
int zero = 0;
short var_18 = (short)29588;
unsigned int var_19 = 1019778142U;
long long int var_20 = 8546414159934576931LL;
unsigned long long int var_21 = 7639371331018863106ULL;
short var_22 = (short)-19867;
long long int var_23 = 5951028776824792464LL;
unsigned short var_24 = (unsigned short)57753;
long long int var_25 = -5885961636819629053LL;
unsigned char var_26 = (unsigned char)72;
short arr_1 [11] [11] ;
signed char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (short)4143;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-108;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
