#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 232618730376691546ULL;
unsigned long long int var_2 = 14528136843708893851ULL;
unsigned int var_3 = 4043856614U;
int var_4 = -597143691;
unsigned long long int var_9 = 10070642057240417552ULL;
short var_10 = (short)19505;
short var_11 = (short)-31208;
unsigned short var_12 = (unsigned short)39747;
int zero = 0;
unsigned long long int var_13 = 3304335808957335821ULL;
unsigned short var_14 = (unsigned short)787;
unsigned char var_15 = (unsigned char)35;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
