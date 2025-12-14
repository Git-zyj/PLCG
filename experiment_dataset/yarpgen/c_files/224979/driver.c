#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
int var_1 = -1020125171;
unsigned int var_2 = 165167669U;
unsigned long long int var_3 = 7031130876494248629ULL;
unsigned long long int var_4 = 10939423737309142197ULL;
int var_5 = 522923414;
short var_6 = (short)7998;
unsigned long long int var_7 = 7916532123812299475ULL;
int var_8 = -1442353798;
int var_9 = -1241206887;
int zero = 0;
unsigned char var_10 = (unsigned char)236;
unsigned long long int var_11 = 10775622207844426515ULL;
unsigned long long int var_12 = 285105729453150562ULL;
unsigned short var_13 = (unsigned short)27899;
unsigned long long int var_14 = 15586573206297019473ULL;
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
