#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 816972353;
unsigned char var_4 = (unsigned char)78;
unsigned int var_5 = 2728198752U;
long long int var_9 = -5484039795612230010LL;
unsigned short var_11 = (unsigned short)24823;
long long int var_12 = -967968058096049433LL;
int var_13 = -1527443263;
int zero = 0;
signed char var_15 = (signed char)26;
signed char var_16 = (signed char)12;
long long int var_17 = 5546498737621342074LL;
unsigned short var_18 = (unsigned short)17614;
unsigned long long int var_19 = 9091680266315297794ULL;
_Bool var_20 = (_Bool)0;
long long int arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -8845187311661168527LL;
}

void checksum() {
    hash(&seed, var_15);
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
