#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 548022429U;
int var_5 = -455953700;
long long int var_6 = 8073319085486480562LL;
_Bool var_8 = (_Bool)0;
unsigned short var_12 = (unsigned short)139;
unsigned long long int var_14 = 9343300814433015281ULL;
long long int var_17 = 518878393469312643LL;
int var_19 = -1173138460;
int zero = 0;
int var_20 = -1653025863;
signed char var_21 = (signed char)-23;
int var_22 = -1862585411;
unsigned long long int var_23 = 13693109594161690084ULL;
long long int var_24 = 1275981064628584699LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
