#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_4 = (short)-26810;
int var_5 = 196739920;
unsigned long long int var_7 = 8608636795851596703ULL;
long long int var_8 = 6301765865597464915LL;
unsigned short var_10 = (unsigned short)53917;
int var_11 = 1259926493;
int zero = 0;
unsigned short var_12 = (unsigned short)64849;
_Bool var_13 = (_Bool)0;
long long int var_14 = 4691421117807458524LL;
unsigned long long int var_15 = 10209012650201525572ULL;
unsigned long long int var_16 = 171375719869221673ULL;
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
