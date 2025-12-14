#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)3932;
unsigned int var_2 = 1124100952U;
unsigned long long int var_4 = 7618014801613505987ULL;
short var_5 = (short)3119;
unsigned long long int var_12 = 11417442037852132200ULL;
signed char var_15 = (signed char)-105;
long long int var_16 = 4149957032305885353LL;
unsigned long long int var_17 = 16408394548955787324ULL;
int zero = 0;
long long int var_18 = -6744769483888278466LL;
long long int var_19 = 1011268038656132581LL;
long long int var_20 = -2986843839156222924LL;
signed char var_21 = (signed char)-65;
unsigned long long int var_22 = 10788179714273882643ULL;
unsigned short arr_0 [16] ;
unsigned char arr_3 [16] [16] ;
unsigned long long int arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)23791;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)79 : (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 5124626375476602429ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
