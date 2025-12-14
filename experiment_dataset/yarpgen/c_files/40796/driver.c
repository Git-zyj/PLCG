#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-16700;
unsigned short var_1 = (unsigned short)23312;
long long int var_2 = -7806103887630720757LL;
signed char var_3 = (signed char)21;
int var_4 = -1762630407;
_Bool var_5 = (_Bool)1;
int var_6 = 271580291;
_Bool var_7 = (_Bool)1;
long long int var_8 = 7921540522989665048LL;
long long int var_9 = -7735388967199013454LL;
long long int var_10 = -954726191874551912LL;
unsigned char var_11 = (unsigned char)209;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1913207953;
int var_14 = -435317963;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 8462975543147822114ULL;
long long int var_17 = -5595414512147949254LL;
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
