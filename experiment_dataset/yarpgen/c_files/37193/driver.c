#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)82;
signed char var_4 = (signed char)-81;
unsigned long long int var_7 = 9460979958262910547ULL;
int var_9 = -1823658954;
long long int var_10 = 5538507939242274613LL;
_Bool var_13 = (_Bool)1;
unsigned short var_16 = (unsigned short)43514;
int zero = 0;
unsigned int var_18 = 4084154736U;
unsigned long long int var_19 = 1464959501417919168ULL;
unsigned long long int var_20 = 9313759225934114438ULL;
unsigned short var_21 = (unsigned short)43283;
unsigned char var_22 = (unsigned char)31;
void init() {
}

void checksum() {
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
