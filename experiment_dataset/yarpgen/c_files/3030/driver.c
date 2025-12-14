#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 16280007053115665935ULL;
unsigned long long int var_4 = 8375434499256830672ULL;
unsigned char var_7 = (unsigned char)223;
unsigned long long int var_9 = 1975585467899369333ULL;
_Bool var_11 = (_Bool)1;
long long int var_12 = -7390208655117155203LL;
int zero = 0;
int var_16 = -698036068;
long long int var_17 = 5111269251888644948LL;
int var_18 = 1102646411;
long long int var_19 = 253333188699066573LL;
unsigned char var_20 = (unsigned char)24;
unsigned int arr_1 [25] ;
unsigned long long int arr_4 [25] [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 261930438U : 1651335363U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = 14154449486171148224ULL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
