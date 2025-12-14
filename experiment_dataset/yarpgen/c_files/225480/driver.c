#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -539281796879581980LL;
signed char var_1 = (signed char)50;
signed char var_3 = (signed char)-49;
long long int var_6 = -6261543586807413079LL;
long long int var_7 = -675590612469598389LL;
unsigned int var_8 = 4159994085U;
signed char var_9 = (signed char)119;
long long int var_10 = -5893810729143062292LL;
unsigned int var_11 = 1917658307U;
long long int var_12 = -836876757438268920LL;
long long int var_13 = -105981673993316157LL;
signed char var_14 = (signed char)106;
int zero = 0;
long long int var_15 = 3893340782268681543LL;
long long int var_16 = 1743988991199226190LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
