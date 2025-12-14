#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)18;
unsigned short var_4 = (unsigned short)26579;
unsigned long long int var_10 = 11924717836532362091ULL;
int var_13 = -1187575113;
unsigned short var_14 = (unsigned short)474;
int zero = 0;
long long int var_17 = 6274537531525958011LL;
short var_18 = (short)-4700;
unsigned int var_19 = 213414577U;
long long int var_20 = -3455575185598784493LL;
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
