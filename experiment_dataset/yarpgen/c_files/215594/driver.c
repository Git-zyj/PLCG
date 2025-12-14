#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)15114;
int var_1 = -960105644;
_Bool var_2 = (_Bool)0;
int var_3 = -1780607800;
int var_5 = -1930417065;
unsigned int var_6 = 3225971116U;
int var_7 = -1623827166;
unsigned int var_8 = 1530947119U;
unsigned long long int var_10 = 8620324326453966990ULL;
int var_13 = -311146795;
int zero = 0;
short var_14 = (short)-16653;
unsigned long long int var_15 = 939752820473851654ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
