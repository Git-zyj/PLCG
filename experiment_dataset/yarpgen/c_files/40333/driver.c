#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2826414221U;
long long int var_2 = -270191263709298352LL;
unsigned long long int var_5 = 5447331954483359763ULL;
long long int var_8 = -1798467113203655629LL;
long long int var_11 = 2168587624088257541LL;
int zero = 0;
unsigned short var_20 = (unsigned short)57061;
unsigned int var_21 = 3541473040U;
int var_22 = -781861452;
unsigned int var_23 = 1800148996U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
