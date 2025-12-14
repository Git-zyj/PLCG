#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5624312078903452829LL;
_Bool var_1 = (_Bool)0;
int var_2 = 1101943718;
unsigned long long int var_3 = 15227760030956432678ULL;
unsigned long long int var_5 = 14577483505896882327ULL;
short var_6 = (short)-23055;
int var_8 = 1969861229;
unsigned short var_9 = (unsigned short)11916;
unsigned short var_10 = (unsigned short)26598;
int zero = 0;
unsigned long long int var_11 = 2896097018885938943ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)27627;
int var_14 = 737616212;
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
