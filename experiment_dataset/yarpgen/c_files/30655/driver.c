#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3625782582U;
int var_2 = 1063643104;
int var_5 = -379266287;
_Bool var_6 = (_Bool)1;
long long int var_7 = 671255707582567488LL;
unsigned char var_8 = (unsigned char)6;
short var_9 = (short)27681;
unsigned char var_10 = (unsigned char)214;
_Bool var_11 = (_Bool)0;
int var_12 = 354526123;
unsigned short var_13 = (unsigned short)20336;
long long int var_16 = 1996739788726301201LL;
unsigned char var_19 = (unsigned char)44;
int zero = 0;
signed char var_20 = (signed char)72;
unsigned long long int var_21 = 16980227709080244847ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
