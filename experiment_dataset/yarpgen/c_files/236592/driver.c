#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-91;
unsigned char var_2 = (unsigned char)121;
unsigned short var_3 = (unsigned short)59458;
signed char var_4 = (signed char)92;
unsigned int var_5 = 97294830U;
unsigned long long int var_6 = 5605973300045340111ULL;
unsigned long long int var_7 = 1594881581317396575ULL;
_Bool var_8 = (_Bool)0;
_Bool var_10 = (_Bool)0;
int var_11 = -1756617077;
int var_12 = -1553858392;
signed char var_13 = (signed char)-120;
int zero = 0;
int var_14 = 841506366;
unsigned int var_15 = 1606590200U;
unsigned int var_16 = 3900194104U;
void init() {
}

void checksum() {
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
