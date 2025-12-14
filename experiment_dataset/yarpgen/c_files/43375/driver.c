#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1573231072;
unsigned char var_3 = (unsigned char)205;
int var_4 = 1846383251;
int var_8 = -1237269936;
unsigned int var_10 = 3160489185U;
unsigned short var_11 = (unsigned short)22326;
int zero = 0;
int var_17 = 110512523;
_Bool var_18 = (_Bool)1;
long long int var_19 = -4397338543451022473LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
