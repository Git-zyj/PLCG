#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)4513;
int var_4 = 94642101;
unsigned long long int var_5 = 14185130796518742943ULL;
unsigned short var_7 = (unsigned short)29249;
unsigned long long int var_8 = 16672991767175065467ULL;
int var_9 = 671012468;
unsigned long long int var_10 = 6014300846978483224ULL;
short var_16 = (short)-29849;
int zero = 0;
unsigned int var_17 = 1873845756U;
short var_18 = (short)9708;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
