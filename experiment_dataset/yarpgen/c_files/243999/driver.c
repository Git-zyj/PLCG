#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)98;
signed char var_3 = (signed char)64;
unsigned int var_6 = 2948031005U;
signed char var_8 = (signed char)-31;
_Bool var_9 = (_Bool)1;
unsigned char var_15 = (unsigned char)180;
int var_17 = 1594242945;
short var_18 = (short)-3405;
_Bool var_19 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
short var_21 = (short)-23777;
unsigned char var_22 = (unsigned char)123;
long long int var_23 = 173296190186349588LL;
short var_24 = (short)-12309;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
