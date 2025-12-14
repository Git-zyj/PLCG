#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1286908247;
int var_5 = -243357231;
unsigned long long int var_6 = 13221605198035595569ULL;
unsigned int var_9 = 2038351208U;
int var_10 = 197333177;
unsigned long long int var_15 = 1204906302661654594ULL;
unsigned char var_16 = (unsigned char)109;
long long int var_17 = -5191916604937722344LL;
short var_18 = (short)32763;
unsigned char var_19 = (unsigned char)254;
int zero = 0;
unsigned int var_20 = 2405924936U;
short var_21 = (short)23706;
int var_22 = -1445312452;
unsigned char var_23 = (unsigned char)167;
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
