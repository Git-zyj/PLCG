#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 712242522004283437ULL;
unsigned char var_5 = (unsigned char)63;
short var_6 = (short)-18341;
unsigned long long int var_7 = 3576211373463242777ULL;
unsigned long long int var_8 = 13506977800531367762ULL;
unsigned short var_9 = (unsigned short)30424;
unsigned short var_10 = (unsigned short)1045;
unsigned long long int var_11 = 14721837156605591459ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)21859;
short var_18 = (short)2414;
int var_19 = 193921944;
unsigned char var_20 = (unsigned char)138;
void init() {
}

void checksum() {
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
