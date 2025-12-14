#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1022853797;
int var_1 = 976098117;
short var_2 = (short)31436;
int var_3 = -579825885;
signed char var_5 = (signed char)-24;
unsigned long long int var_11 = 680917434798262056ULL;
signed char var_14 = (signed char)66;
long long int var_16 = 622322673077666463LL;
unsigned short var_17 = (unsigned short)49947;
int zero = 0;
long long int var_19 = -2386912876599025042LL;
unsigned long long int var_20 = 613569166128256378ULL;
void init() {
}

void checksum() {
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
