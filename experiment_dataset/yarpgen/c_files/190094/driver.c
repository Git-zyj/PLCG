#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1026726959;
long long int var_5 = -121945111443108322LL;
unsigned int var_8 = 2441173176U;
long long int var_14 = 8314039437219473685LL;
unsigned char var_15 = (unsigned char)4;
int zero = 0;
long long int var_16 = -2610706171698891956LL;
int var_17 = 1523689524;
long long int var_18 = 2526755182120661817LL;
unsigned int var_19 = 3001151111U;
int var_20 = 1051962839;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
