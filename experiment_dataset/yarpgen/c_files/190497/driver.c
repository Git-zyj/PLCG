#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)33;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)1;
int var_8 = 1479116082;
unsigned long long int var_11 = 15920681982442371515ULL;
short var_13 = (short)-9415;
long long int var_16 = -7778355618817250914LL;
int zero = 0;
unsigned long long int var_17 = 5123349911907355047ULL;
long long int var_18 = -8985035656894670484LL;
short var_19 = (short)-12871;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
