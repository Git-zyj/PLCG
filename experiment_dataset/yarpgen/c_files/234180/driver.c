#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-21890;
unsigned long long int var_3 = 9321905528540372735ULL;
unsigned short var_4 = (unsigned short)25908;
unsigned int var_7 = 2729642104U;
int var_8 = -1924282345;
int var_9 = 1805099878;
unsigned long long int var_15 = 14283986941829238810ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)32950;
_Bool var_18 = (_Bool)0;
short var_19 = (short)5496;
unsigned long long int var_20 = 11839997150190568581ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
