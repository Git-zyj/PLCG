#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -164900461;
unsigned int var_1 = 3975317728U;
long long int var_2 = 5427711478026611435LL;
long long int var_3 = 153850066472537906LL;
int var_4 = 120185626;
int var_5 = 387861128;
long long int var_6 = 7645755284215535930LL;
unsigned int var_7 = 1517498604U;
int var_9 = 2115813220;
int var_10 = 1121560294;
unsigned int var_11 = 2622648191U;
int zero = 0;
long long int var_12 = -4697319753570513198LL;
long long int var_13 = -8310738399003137713LL;
unsigned int var_14 = 2636216630U;
int var_15 = -1324215378;
long long int var_16 = 8879451339935220477LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
