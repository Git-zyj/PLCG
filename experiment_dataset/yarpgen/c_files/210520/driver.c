#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16591578021126352329ULL;
long long int var_9 = 3657369591740238568LL;
unsigned long long int var_10 = 3176013764683771334ULL;
int var_12 = -922057563;
short var_13 = (short)20839;
unsigned long long int var_16 = 12244531886027383260ULL;
unsigned long long int var_17 = 2184843214653394869ULL;
int var_18 = -1592691202;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 1379028231U;
signed char var_22 = (signed char)-117;
unsigned char var_23 = (unsigned char)132;
int var_24 = 1266152553;
signed char var_25 = (signed char)120;
short var_26 = (short)-31281;
unsigned short arr_0 [19] ;
unsigned char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)61151;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)119;
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
