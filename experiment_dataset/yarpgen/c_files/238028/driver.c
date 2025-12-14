#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_1 = 3166210704U;
short var_2 = (short)19922;
unsigned long long int var_3 = 8189393808499448811ULL;
short var_4 = (short)13806;
unsigned short var_7 = (unsigned short)25397;
unsigned int var_8 = 817526348U;
unsigned char var_10 = (unsigned char)86;
unsigned long long int var_11 = 7702196733753934208ULL;
int zero = 0;
short var_12 = (short)-9671;
unsigned char var_13 = (unsigned char)209;
unsigned char var_14 = (unsigned char)177;
void init() {
}

void checksum() {
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
