#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2950233490331069719LL;
short var_2 = (short)-13036;
unsigned char var_3 = (unsigned char)68;
unsigned int var_4 = 1066943648U;
unsigned long long int var_6 = 12424153868440620168ULL;
unsigned char var_8 = (unsigned char)5;
unsigned char var_9 = (unsigned char)199;
int var_11 = -1483118191;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1631031342U;
unsigned int var_18 = 4274879299U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
