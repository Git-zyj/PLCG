#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3860350199U;
unsigned char var_2 = (unsigned char)250;
unsigned short var_5 = (unsigned short)56406;
long long int var_6 = 2211410188782086589LL;
unsigned long long int var_7 = 14585327913924366429ULL;
unsigned short var_8 = (unsigned short)10359;
short var_10 = (short)21721;
unsigned short var_13 = (unsigned short)51698;
unsigned char var_14 = (unsigned char)204;
unsigned char var_15 = (unsigned char)240;
int zero = 0;
long long int var_18 = -8780991225952825851LL;
long long int var_19 = -7631238976512139661LL;
unsigned long long int var_20 = 13206896485647476830ULL;
unsigned char var_21 = (unsigned char)137;
unsigned char var_22 = (unsigned char)190;
unsigned short var_23 = (unsigned short)43486;
short var_24 = (short)15220;
long long int var_25 = 3173828025361982895LL;
unsigned short arr_1 [21] [21] ;
unsigned long long int arr_2 [21] ;
signed char arr_12 [21] [21] [21] [21] [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)25855;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3081186571354805778ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (signed char)79;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
