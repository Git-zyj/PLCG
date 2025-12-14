#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8155010779081406007LL;
short var_3 = (short)21731;
unsigned char var_4 = (unsigned char)170;
long long int var_12 = 6727276403645868450LL;
int zero = 0;
unsigned char var_17 = (unsigned char)86;
unsigned int var_18 = 4216803753U;
long long int var_19 = -8033824252352866015LL;
long long int var_20 = -4107962123859261160LL;
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
