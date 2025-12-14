#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7036497397719591412LL;
unsigned int var_5 = 3444677643U;
long long int var_10 = -4165274986184422494LL;
unsigned long long int var_14 = 16756629248842842597ULL;
unsigned long long int var_15 = 10253845008583860795ULL;
unsigned short var_16 = (unsigned short)54171;
unsigned long long int var_18 = 16414510060568455644ULL;
unsigned short var_19 = (unsigned short)9020;
int zero = 0;
unsigned int var_20 = 1354720727U;
long long int var_21 = -636543015907769836LL;
unsigned long long int var_22 = 5750128803516788693ULL;
unsigned int var_23 = 666835746U;
void init() {
}

void checksum() {
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
