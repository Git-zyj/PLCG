#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 13883203302938921413ULL;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 1056208573U;
long long int var_7 = -5323512860727589317LL;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16489022382073013212ULL;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)44108;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 10277117585923362997ULL;
unsigned int var_14 = 3332585497U;
unsigned long long int var_15 = 17370867111050021443ULL;
unsigned long long int var_16 = 10536914950442767751ULL;
unsigned long long int var_17 = 4751825093784483013ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)251;
unsigned long long int var_20 = 9932871760612346210ULL;
unsigned long long int var_21 = 14186456745685835419ULL;
unsigned long long int var_22 = 295732143737371791ULL;
unsigned long long int var_23 = 7235083850068703698ULL;
unsigned char var_24 = (unsigned char)64;
unsigned char var_25 = (unsigned char)185;
unsigned long long int var_26 = 10556603501592397605ULL;
unsigned long long int var_27 = 10056769282590064692ULL;
unsigned long long int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 10747249143981555196ULL;
}

void checksum() {
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
