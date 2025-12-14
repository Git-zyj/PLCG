#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -44335715;
int var_1 = -1566186309;
unsigned short var_3 = (unsigned short)61503;
signed char var_4 = (signed char)-46;
short var_5 = (short)-14377;
short var_7 = (short)25084;
signed char var_8 = (signed char)-94;
unsigned long long int var_9 = 12731116686484647079ULL;
unsigned short var_11 = (unsigned short)39029;
int zero = 0;
unsigned int var_14 = 591373365U;
unsigned long long int var_15 = 17014582772149586904ULL;
unsigned int var_16 = 1461677488U;
unsigned short var_17 = (unsigned short)3640;
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
