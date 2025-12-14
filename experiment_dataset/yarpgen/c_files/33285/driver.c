#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1879595113U;
long long int var_3 = 6988286405259190355LL;
int var_4 = 998393863;
unsigned int var_6 = 2879243778U;
signed char var_8 = (signed char)-54;
long long int var_9 = -3093030925700684466LL;
unsigned int var_11 = 2217741080U;
int zero = 0;
short var_14 = (short)20630;
int var_15 = -335544202;
long long int var_16 = -5431708984321115193LL;
long long int var_17 = 2582780762532626959LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
