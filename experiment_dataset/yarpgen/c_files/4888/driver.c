#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-103;
unsigned short var_5 = (unsigned short)60229;
long long int var_7 = -8776893579216545007LL;
short var_8 = (short)29905;
unsigned int var_9 = 1538262056U;
int zero = 0;
unsigned long long int var_11 = 1700308176994620976ULL;
int var_12 = 642234260;
short var_13 = (short)-5487;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
