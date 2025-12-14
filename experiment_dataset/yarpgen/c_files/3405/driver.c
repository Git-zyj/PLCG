#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)19310;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)50;
signed char var_5 = (signed char)105;
signed char var_6 = (signed char)-8;
long long int var_7 = 2279690365205558280LL;
signed char var_8 = (signed char)112;
unsigned long long int var_9 = 5390902542180468088ULL;
signed char var_11 = (signed char)53;
unsigned int var_12 = 3424985256U;
int zero = 0;
_Bool var_13 = (_Bool)0;
long long int var_14 = 741756216002937225LL;
unsigned char var_15 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
