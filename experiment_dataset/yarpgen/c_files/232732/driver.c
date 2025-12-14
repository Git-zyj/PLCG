#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3025997479705341886LL;
long long int var_2 = 4033368490286360577LL;
unsigned int var_3 = 4163009093U;
long long int var_6 = 740602853106869163LL;
unsigned long long int var_7 = 3273762806984468064ULL;
unsigned char var_10 = (unsigned char)144;
unsigned short var_11 = (unsigned short)18783;
long long int var_12 = 5621137761209618062LL;
unsigned long long int var_14 = 5366846905849076278ULL;
int zero = 0;
unsigned long long int var_15 = 12755146405745594671ULL;
unsigned int var_16 = 2617252706U;
int var_17 = 368822414;
long long int var_18 = -1902479542583496409LL;
void init() {
}

void checksum() {
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
