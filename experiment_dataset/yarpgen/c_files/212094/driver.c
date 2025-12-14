#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27169;
unsigned int var_3 = 305657928U;
unsigned char var_5 = (unsigned char)211;
signed char var_6 = (signed char)-101;
unsigned int var_8 = 153536957U;
signed char var_9 = (signed char)86;
int var_11 = -1775471786;
int zero = 0;
_Bool var_16 = (_Bool)1;
short var_17 = (short)13867;
long long int var_18 = -770794219918743031LL;
int var_19 = -1398831515;
unsigned int var_20 = 1627033011U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
