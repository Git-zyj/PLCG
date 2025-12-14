#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)229;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)62650;
signed char var_9 = (signed char)88;
long long int var_12 = 6266369662816222595LL;
short var_17 = (short)9311;
int zero = 0;
unsigned short var_18 = (unsigned short)57463;
unsigned int var_19 = 3009016423U;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)108;
int var_22 = 761246177;
unsigned long long int var_23 = 4966748234035231133ULL;
signed char arr_1 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (signed char)-57;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
