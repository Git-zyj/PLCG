#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1088826304U;
unsigned int var_5 = 451601635U;
unsigned int var_6 = 699851301U;
short var_8 = (short)3713;
unsigned int var_9 = 1807586074U;
unsigned int var_10 = 1550240838U;
short var_12 = (short)-29868;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)54256;
short var_17 = (short)32162;
unsigned long long int var_18 = 16881472105871487349ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
