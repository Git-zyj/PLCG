#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 18001456804517628922ULL;
unsigned char var_3 = (unsigned char)21;
unsigned char var_7 = (unsigned char)249;
unsigned char var_9 = (unsigned char)149;
unsigned long long int var_11 = 9975551774558881154ULL;
long long int var_12 = 1054231045705416160LL;
unsigned int var_13 = 1226629406U;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)40446;
unsigned char var_21 = (unsigned char)220;
long long int var_22 = 1816871240101952062LL;
signed char var_23 = (signed char)-65;
signed char var_24 = (signed char)-48;
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
