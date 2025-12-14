#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8331524374657474318ULL;
long long int var_1 = -4917835225106973141LL;
unsigned long long int var_2 = 15006480615623027196ULL;
long long int var_4 = -3375488775829500880LL;
unsigned long long int var_7 = 5094368755226288753ULL;
unsigned int var_9 = 3214188324U;
long long int var_13 = -8142055302133348574LL;
int zero = 0;
unsigned char var_15 = (unsigned char)74;
long long int var_16 = -1487042409344768804LL;
unsigned short var_17 = (unsigned short)46884;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
