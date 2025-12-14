#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)241;
unsigned short var_2 = (unsigned short)21125;
unsigned short var_5 = (unsigned short)48939;
long long int var_6 = 1080159548374405795LL;
unsigned long long int var_9 = 12118172133933814791ULL;
long long int var_11 = 3833537079977249877LL;
unsigned long long int var_12 = 4223222647858110580ULL;
long long int var_14 = -3094556600925494206LL;
signed char var_15 = (signed char)46;
unsigned short var_16 = (unsigned short)52490;
long long int var_17 = -8561673428218993832LL;
unsigned long long int var_18 = 16504511806933052563ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)52181;
long long int var_20 = 3747985585565943980LL;
unsigned short var_21 = (unsigned short)22984;
unsigned short var_22 = (unsigned short)35925;
long long int arr_6 [20] [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 8874931090370467715LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
