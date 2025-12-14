#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5684520703516384021LL;
unsigned int var_1 = 2394478755U;
unsigned short var_3 = (unsigned short)59078;
unsigned long long int var_4 = 6699349134281704878ULL;
signed char var_6 = (signed char)8;
unsigned long long int var_8 = 10649062118588026729ULL;
unsigned int var_13 = 3094186439U;
long long int var_14 = -6133812254302243079LL;
int zero = 0;
unsigned long long int var_16 = 13744463212247523104ULL;
signed char var_17 = (signed char)48;
unsigned long long int var_18 = 8745409830853513899ULL;
unsigned long long int var_19 = 1266044380186912970ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
