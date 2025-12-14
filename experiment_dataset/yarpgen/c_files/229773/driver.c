#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7834630064123359448LL;
int var_3 = -836724504;
unsigned int var_6 = 1341685361U;
unsigned long long int var_7 = 16949070981641350349ULL;
unsigned short var_8 = (unsigned short)33387;
unsigned int var_10 = 3891677025U;
int zero = 0;
short var_12 = (short)1926;
short var_13 = (short)-31487;
unsigned long long int var_14 = 64312312771905354ULL;
unsigned long long int var_15 = 5778748801831504808ULL;
long long int var_16 = 7038844922659380311LL;
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
