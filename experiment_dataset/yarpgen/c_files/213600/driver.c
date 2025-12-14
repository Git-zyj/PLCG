#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26601;
unsigned char var_2 = (unsigned char)51;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 5929084347393602008ULL;
unsigned long long int var_5 = 4785710466146747076ULL;
unsigned long long int var_6 = 17156591333160435332ULL;
unsigned long long int var_7 = 12465305630112363983ULL;
unsigned long long int var_8 = 9772371374193909414ULL;
unsigned short var_10 = (unsigned short)49489;
int zero = 0;
unsigned long long int var_11 = 15195306296843596087ULL;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)67;
unsigned long long int var_14 = 5723378549866215421ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
