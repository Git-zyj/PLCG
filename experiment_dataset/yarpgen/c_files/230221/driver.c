#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)155;
int var_4 = 564137435;
long long int var_5 = -7738142879214883154LL;
long long int var_9 = 8889067035121229370LL;
long long int var_12 = -3390276565555957974LL;
unsigned char var_13 = (unsigned char)78;
int var_18 = 483350115;
int zero = 0;
int var_19 = -635495450;
_Bool var_20 = (_Bool)1;
short var_21 = (short)31031;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
