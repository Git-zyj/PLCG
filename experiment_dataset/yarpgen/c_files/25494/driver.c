#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 7406899700138568369LL;
long long int var_9 = -5864227374341556321LL;
unsigned char var_10 = (unsigned char)255;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)183;
int zero = 0;
signed char var_18 = (signed char)-97;
unsigned int var_19 = 458315310U;
int var_20 = -672848755;
unsigned char var_21 = (unsigned char)186;
short var_22 = (short)-10017;
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
