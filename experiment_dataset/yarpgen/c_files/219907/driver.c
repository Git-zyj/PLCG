#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 194393726089452265LL;
unsigned char var_4 = (unsigned char)117;
short var_9 = (short)15669;
unsigned char var_12 = (unsigned char)150;
int var_14 = -1548897876;
int zero = 0;
int var_20 = 801596988;
unsigned long long int var_21 = 7784777583882712725ULL;
long long int var_22 = -4985055463876727373LL;
unsigned short var_23 = (unsigned short)21061;
unsigned int var_24 = 522665052U;
long long int var_25 = 5755253461362136013LL;
unsigned long long int var_26 = 7181087214540590311ULL;
signed char var_27 = (signed char)68;
int var_28 = -1101887111;
unsigned int var_29 = 2056405643U;
short var_30 = (short)-13009;
unsigned short arr_0 [23] ;
signed char arr_1 [23] ;
unsigned long long int arr_3 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned short)48991;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = 875467134905969326ULL;
}

void checksum() {
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
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
