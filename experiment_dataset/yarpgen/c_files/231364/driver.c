#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3885300926302661945LL;
unsigned short var_1 = (unsigned short)26394;
unsigned int var_2 = 1023073640U;
long long int var_4 = 4466610789681448562LL;
unsigned long long int var_7 = 6583109047018749028ULL;
unsigned long long int var_8 = 17051672796594797255ULL;
unsigned short var_9 = (unsigned short)46038;
int zero = 0;
unsigned short var_10 = (unsigned short)24216;
int var_11 = -1063816755;
long long int var_12 = 1446605818500197469LL;
unsigned long long int var_13 = 18261055015776414760ULL;
short var_14 = (short)-26460;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
