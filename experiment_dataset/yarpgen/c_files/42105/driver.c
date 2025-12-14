#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1288842796U;
signed char var_1 = (signed char)-97;
short var_2 = (short)10451;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2576749110U;
short var_7 = (short)8042;
unsigned char var_8 = (unsigned char)145;
unsigned short var_9 = (unsigned short)36728;
unsigned short var_10 = (unsigned short)39800;
short var_11 = (short)-32568;
int zero = 0;
long long int var_12 = 4820964701133500678LL;
unsigned int var_13 = 3480734798U;
signed char var_14 = (signed char)-82;
unsigned char var_15 = (unsigned char)178;
unsigned short var_16 = (unsigned short)44285;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
