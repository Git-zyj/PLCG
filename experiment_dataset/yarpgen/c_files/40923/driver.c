#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -77754927;
short var_2 = (short)-10322;
long long int var_3 = 7466241470699360473LL;
unsigned char var_4 = (unsigned char)152;
short var_5 = (short)-12376;
short var_6 = (short)-19363;
signed char var_7 = (signed char)116;
unsigned long long int var_9 = 16243988570759141529ULL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 2706343119U;
int zero = 0;
short var_14 = (short)15779;
long long int var_15 = -2093877255978157269LL;
signed char var_16 = (signed char)109;
unsigned long long int var_17 = 10723721121338829825ULL;
short var_18 = (short)-27050;
unsigned int var_19 = 2710426543U;
short var_20 = (short)-1755;
unsigned int arr_1 [11] ;
unsigned short arr_8 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1758922658U : 644571400U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)40231 : (unsigned short)53343;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
