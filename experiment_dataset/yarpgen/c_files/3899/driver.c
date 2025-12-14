#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1277670092;
unsigned int var_1 = 114303508U;
short var_2 = (short)5346;
int var_3 = -287586050;
short var_4 = (short)-23352;
long long int var_5 = 9019910277925955398LL;
unsigned long long int var_6 = 12726634398778230220ULL;
short var_7 = (short)-18846;
int zero = 0;
unsigned char var_12 = (unsigned char)214;
short var_13 = (short)11506;
int var_14 = -2135182578;
unsigned short var_15 = (unsigned short)6655;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
