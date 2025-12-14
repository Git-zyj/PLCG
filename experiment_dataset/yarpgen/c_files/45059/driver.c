#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1503375925U;
unsigned short var_2 = (unsigned short)18723;
int var_3 = -654233591;
long long int var_6 = -6420143818948938980LL;
long long int var_8 = 6239893166346616713LL;
unsigned long long int var_10 = 5865569241977368446ULL;
unsigned short var_18 = (unsigned short)55885;
int zero = 0;
unsigned long long int var_19 = 12832725719656824442ULL;
signed char var_20 = (signed char)-11;
unsigned short var_21 = (unsigned short)48940;
unsigned short var_22 = (unsigned short)30742;
short var_23 = (short)8825;
unsigned int arr_1 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1023036143U;
}

void checksum() {
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
