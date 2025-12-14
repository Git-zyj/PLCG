#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2027819770;
unsigned char var_4 = (unsigned char)180;
long long int var_5 = -3443001761229781439LL;
unsigned char var_6 = (unsigned char)1;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)233;
short var_10 = (short)-4617;
signed char var_13 = (signed char)-93;
unsigned char var_15 = (unsigned char)177;
unsigned char var_17 = (unsigned char)61;
int zero = 0;
unsigned char var_18 = (unsigned char)156;
unsigned long long int var_19 = 16365320297060011620ULL;
unsigned int var_20 = 3884381024U;
int var_21 = 802269862;
unsigned long long int var_22 = 8178612030216367979ULL;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)162;
signed char var_25 = (signed char)-115;
unsigned long long int arr_0 [16] ;
_Bool arr_1 [16] [16] ;
unsigned long long int arr_2 [16] ;
short arr_4 [16] ;
short arr_5 [16] ;
signed char arr_9 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_10 [16] [16] [16] [16] [16] ;
unsigned char arr_11 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 7261560623121550015ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 9087721113469659789ULL : 7532214041152068608ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (short)-32693;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)27258 : (short)327;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? 296186204U : 4182668068U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)217 : (unsigned char)138;
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
