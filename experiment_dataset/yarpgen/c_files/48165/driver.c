#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11046;
short var_8 = (short)-29807;
int var_10 = 603454577;
unsigned short var_12 = (unsigned short)49427;
long long int var_13 = 4549767490433887751LL;
signed char var_14 = (signed char)-107;
signed char var_18 = (signed char)85;
signed char var_19 = (signed char)-103;
int zero = 0;
unsigned short var_20 = (unsigned short)44390;
int var_21 = 1801995607;
long long int var_22 = 8728062966775014630LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
