#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1730553974;
int var_4 = -1595064278;
unsigned long long int var_5 = 10619095003570196924ULL;
unsigned short var_7 = (unsigned short)4679;
unsigned int var_8 = 2914093431U;
int zero = 0;
unsigned long long int var_10 = 13951249210798875525ULL;
short var_11 = (short)27639;
unsigned long long int var_12 = 6984841742306913782ULL;
unsigned long long int var_13 = 9909317292602856297ULL;
signed char var_14 = (signed char)3;
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
