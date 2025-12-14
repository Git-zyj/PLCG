#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2002047129;
long long int var_2 = 1674292128297689648LL;
short var_3 = (short)1294;
int var_4 = 118980680;
unsigned short var_5 = (unsigned short)48823;
short var_6 = (short)18085;
unsigned short var_7 = (unsigned short)15569;
int var_8 = -1231955904;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_10 = 1371430521;
unsigned short var_11 = (unsigned short)15034;
unsigned short var_12 = (unsigned short)11146;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
