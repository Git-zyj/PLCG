#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7660778572424021156LL;
long long int var_2 = -7291527581126138580LL;
_Bool var_3 = (_Bool)0;
long long int var_4 = -1183761165010734572LL;
unsigned char var_6 = (unsigned char)224;
unsigned long long int var_7 = 2822541635968506854ULL;
unsigned int var_8 = 1597880235U;
long long int var_9 = -1167261421741806598LL;
unsigned char var_10 = (unsigned char)188;
long long int var_11 = 1972957724996924918LL;
unsigned long long int var_12 = 2717698146869835819ULL;
int zero = 0;
unsigned long long int var_14 = 1816443647865464876ULL;
short var_15 = (short)-11500;
unsigned long long int var_16 = 16216241583154060761ULL;
unsigned long long int var_17 = 9030528614740721873ULL;
unsigned char var_18 = (unsigned char)123;
long long int var_19 = 8959258077518241843LL;
long long int var_20 = 3889892915223923084LL;
unsigned char var_21 = (unsigned char)193;
int var_22 = -2114409135;
unsigned long long int arr_4 [17] ;
unsigned long long int arr_6 [17] ;
unsigned long long int arr_10 [17] [17] [17] [17] ;
unsigned int arr_11 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 8689212879935480889ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = 18163481537282719159ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 224460342824606790ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 1203950529U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
