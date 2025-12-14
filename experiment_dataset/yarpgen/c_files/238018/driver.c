#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 1052211118311869965LL;
unsigned long long int var_5 = 3548967732036917681ULL;
unsigned int var_8 = 1398235472U;
unsigned int var_12 = 3472135829U;
unsigned char var_13 = (unsigned char)218;
_Bool var_14 = (_Bool)1;
signed char var_17 = (signed char)-103;
int zero = 0;
unsigned int var_19 = 206605434U;
unsigned int var_20 = 3977591598U;
int var_21 = -1659372707;
int var_22 = -1775828516;
void init() {
}

void checksum() {
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
