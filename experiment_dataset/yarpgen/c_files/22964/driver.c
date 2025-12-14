#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1662045400;
unsigned int var_2 = 1474744666U;
unsigned int var_4 = 947680001U;
int var_6 = -1253859282;
short var_7 = (short)16839;
int var_8 = 1128925693;
unsigned int var_9 = 1344228377U;
unsigned char var_10 = (unsigned char)17;
int zero = 0;
long long int var_11 = 8074168530103757470LL;
unsigned int var_12 = 3602825671U;
int var_13 = -78700040;
signed char var_14 = (signed char)56;
int var_15 = 779633434;
signed char var_16 = (signed char)-49;
signed char arr_0 [10] [10] ;
long long int arr_2 [10] ;
long long int arr_7 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)11;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = -7364561598456418104LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = -4830315063832135778LL;
}

void checksum() {
    hash(&seed, var_11);
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
