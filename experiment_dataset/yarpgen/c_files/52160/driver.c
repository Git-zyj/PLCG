#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned long long int var_8 = 1101583862804296850ULL;
unsigned short var_9 = (unsigned short)65438;
short var_13 = (short)-23906;
_Bool var_14 = (_Bool)0;
long long int var_17 = -178045497081104102LL;
int zero = 0;
long long int var_19 = 6371225309943740132LL;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 12823108234291765293ULL;
long long int var_22 = 4481135629366281238LL;
short var_23 = (short)18687;
unsigned long long int var_24 = 17570724104123912918ULL;
int var_25 = -31589195;
_Bool var_26 = (_Bool)1;
_Bool arr_7 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
