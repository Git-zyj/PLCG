#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)17094;
long long int var_3 = 4323949616382539512LL;
unsigned long long int var_5 = 13790353934319761452ULL;
short var_7 = (short)29168;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 8884809635500617785ULL;
int zero = 0;
unsigned long long int var_10 = 12337519361253911496ULL;
short var_11 = (short)19505;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
