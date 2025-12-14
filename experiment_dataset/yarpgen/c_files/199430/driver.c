#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14433642337970974572ULL;
short var_2 = (short)-24541;
unsigned short var_3 = (unsigned short)24669;
long long int var_4 = 4228981890560461927LL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_7 = (short)16267;
long long int var_8 = -9042707086692624325LL;
unsigned long long int var_11 = 5629077349374831025ULL;
unsigned long long int var_12 = 15435411923309317840ULL;
int zero = 0;
signed char var_13 = (signed char)64;
long long int var_14 = -7058648401338171571LL;
unsigned long long int var_15 = 11150958184586305288ULL;
signed char var_16 = (signed char)117;
signed char var_17 = (signed char)-43;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
