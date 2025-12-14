#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1162634817U;
short var_2 = (short)-19160;
unsigned short var_3 = (unsigned short)12437;
unsigned char var_4 = (unsigned char)185;
signed char var_7 = (signed char)-100;
long long int var_9 = 5396697920934279722LL;
int zero = 0;
long long int var_12 = -354388393977382794LL;
long long int var_13 = -3209900262624882634LL;
short var_14 = (short)4480;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)58947;
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
