#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -95426677;
short var_1 = (short)-22492;
unsigned long long int var_3 = 17041017830268408028ULL;
unsigned int var_5 = 587029197U;
short var_9 = (short)-20440;
long long int var_11 = -3935974172597595995LL;
long long int var_14 = -1290848740681132423LL;
long long int var_16 = 688604423507721890LL;
int zero = 0;
long long int var_18 = 1986938983638882317LL;
short var_19 = (short)24049;
unsigned long long int var_20 = 7187775142779863208ULL;
signed char var_21 = (signed char)-108;
unsigned long long int var_22 = 10031406845744483512ULL;
signed char var_23 = (signed char)-12;
int var_24 = -864270852;
long long int var_25 = -1233617737939547686LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
