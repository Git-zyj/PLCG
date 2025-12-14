#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17062274398744644325ULL;
unsigned long long int var_2 = 8400172318975383343ULL;
unsigned short var_4 = (unsigned short)12157;
int var_6 = 554621819;
long long int var_7 = 5191980276883037555LL;
long long int var_8 = 3844248935636801494LL;
long long int var_9 = 2569487258229937042LL;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)22312;
unsigned short var_14 = (unsigned short)4929;
unsigned char var_15 = (unsigned char)37;
int var_16 = -1797737353;
unsigned char var_17 = (unsigned char)47;
unsigned short arr_1 [12] ;
unsigned short arr_3 [12] ;
long long int arr_4 [12] [12] ;
unsigned short arr_5 [12] [12] [12] ;
unsigned char arr_15 [12] [12] [12] [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)58060;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned short)60280;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 5410593808712233392LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)1243;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned char)179;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
