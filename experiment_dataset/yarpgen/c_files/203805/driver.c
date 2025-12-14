#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18176947220491392980ULL;
unsigned int var_3 = 764334318U;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 17735776174480160793ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3932140645U;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)234;
short var_15 = (short)16172;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
unsigned short var_21 = (unsigned short)7429;
_Bool var_22 = (_Bool)1;
unsigned short var_23 = (unsigned short)22964;
long long int var_24 = 4932668525689479723LL;
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
