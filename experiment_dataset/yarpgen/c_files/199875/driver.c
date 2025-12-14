#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5431597972937090505LL;
long long int var_3 = 8332310563214887633LL;
_Bool var_4 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_10 = (short)-5850;
short var_11 = (short)16588;
signed char var_13 = (signed char)-24;
int var_17 = 1660580552;
int var_18 = 72998630;
int zero = 0;
long long int var_19 = 4375113637125729430LL;
unsigned short var_20 = (unsigned short)27660;
unsigned short var_21 = (unsigned short)34665;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
