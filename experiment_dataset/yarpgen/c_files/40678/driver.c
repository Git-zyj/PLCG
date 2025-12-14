#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10788265679122610881ULL;
unsigned char var_2 = (unsigned char)186;
_Bool var_8 = (_Bool)1;
int var_9 = 1058670408;
signed char var_12 = (signed char)9;
unsigned long long int var_13 = 3160225864966940331ULL;
_Bool var_15 = (_Bool)0;
int var_17 = 612880486;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)20710;
void init() {
}

void checksum() {
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
