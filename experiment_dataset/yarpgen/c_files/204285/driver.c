#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2717922188397800684ULL;
unsigned char var_2 = (unsigned char)235;
unsigned char var_3 = (unsigned char)27;
unsigned long long int var_4 = 14568862365558766715ULL;
long long int var_5 = -603860557290819102LL;
unsigned long long int var_7 = 4679235473730960024ULL;
long long int var_8 = 8210855315763802741LL;
unsigned long long int var_10 = 1002576986892081664ULL;
unsigned char var_11 = (unsigned char)139;
unsigned short var_12 = (unsigned short)45044;
int zero = 0;
unsigned int var_14 = 3920442290U;
unsigned int var_15 = 3208025624U;
unsigned long long int var_16 = 13695443215598800304ULL;
signed char var_17 = (signed char)80;
int var_18 = 130137376;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
