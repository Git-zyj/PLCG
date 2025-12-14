#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1861849519;
unsigned char var_2 = (unsigned char)103;
long long int var_9 = -6937966900328134466LL;
unsigned char var_15 = (unsigned char)183;
long long int var_17 = -7407807787769278560LL;
int var_19 = -991344306;
int zero = 0;
unsigned short var_20 = (unsigned short)26532;
short var_21 = (short)-26459;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-30987;
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
