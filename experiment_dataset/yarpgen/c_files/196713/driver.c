#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-78;
signed char var_1 = (signed char)-77;
signed char var_2 = (signed char)64;
signed char var_3 = (signed char)105;
signed char var_4 = (signed char)51;
signed char var_5 = (signed char)79;
signed char var_6 = (signed char)-19;
signed char var_7 = (signed char)-38;
signed char var_9 = (signed char)-62;
signed char var_10 = (signed char)29;
signed char var_15 = (signed char)-107;
signed char var_16 = (signed char)-102;
signed char var_17 = (signed char)126;
int zero = 0;
signed char var_18 = (signed char)15;
signed char var_19 = (signed char)-121;
signed char var_20 = (signed char)2;
signed char var_21 = (signed char)85;
signed char var_22 = (signed char)-14;
signed char var_23 = (signed char)-69;
signed char var_24 = (signed char)-44;
signed char var_25 = (signed char)47;
signed char arr_0 [17] ;
signed char arr_1 [17] ;
signed char arr_3 [17] ;
signed char arr_4 [17] [17] [17] [17] ;
signed char arr_8 [17] [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)25;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)-81;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_4 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)98;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-3 : (signed char)6;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_8 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
