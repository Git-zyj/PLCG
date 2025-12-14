#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8904303701460742997LL;
long long int var_1 = 4918538196279157337LL;
long long int var_2 = -8155212569080032891LL;
long long int var_3 = 8138953450625946244LL;
long long int var_4 = 1186962788281945840LL;
long long int var_6 = -8510737591217489602LL;
long long int var_8 = 6574900747626077134LL;
long long int var_10 = -1502998551180820768LL;
int zero = 0;
long long int var_12 = 3295601587448022976LL;
long long int var_13 = 2036338580772348590LL;
long long int var_14 = 3215400410564404362LL;
long long int var_15 = -3719807891013695231LL;
long long int var_16 = -1125943354575700775LL;
long long int var_17 = 4690604108371079770LL;
long long int var_18 = -3774009643931140434LL;
long long int arr_0 [10] [10] ;
long long int arr_3 [10] [10] [10] ;
long long int arr_5 [10] [10] [10] [10] ;
long long int arr_10 [13] [13] ;
long long int arr_11 [13] [13] ;
long long int arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -5074370374094622367LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -5758011208375703597LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = -1120748459407994451LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = -5631238156763637994LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_11 [i_0] [i_1] = -7215245036403125747LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 3689441435641267125LL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
