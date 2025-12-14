#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2946004822188309579ULL;
short var_1 = (short)-7376;
signed char var_2 = (signed char)-34;
unsigned long long int var_4 = 16487820958536654914ULL;
signed char var_5 = (signed char)85;
unsigned int var_7 = 4273292625U;
int var_9 = -1397297350;
long long int var_10 = -8376021934519734297LL;
unsigned char var_11 = (unsigned char)35;
int zero = 0;
unsigned short var_12 = (unsigned short)581;
unsigned long long int var_13 = 16753928116045949094ULL;
short var_14 = (short)19070;
unsigned long long int var_15 = 3604107855445901169ULL;
unsigned char var_16 = (unsigned char)234;
short arr_0 [23] [23] ;
unsigned long long int arr_1 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (short)-2877;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = 9284231934888867419ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
