#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15414217005611512075ULL;
unsigned char var_3 = (unsigned char)219;
short var_4 = (short)18246;
long long int var_5 = -5374261317545435198LL;
unsigned short var_6 = (unsigned short)20310;
unsigned long long int var_7 = 16544112371641724866ULL;
long long int var_9 = -4038733712919046414LL;
long long int var_13 = 4744697915644299859LL;
int zero = 0;
unsigned short var_15 = (unsigned short)65522;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-8373;
unsigned long long int var_18 = 17119467150344496509ULL;
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
