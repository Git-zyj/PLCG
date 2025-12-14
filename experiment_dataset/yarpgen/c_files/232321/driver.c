#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 567199877U;
unsigned int var_3 = 3425431667U;
long long int var_4 = 1261584889112784128LL;
int var_7 = -194839811;
unsigned int var_8 = 1849297733U;
unsigned long long int var_9 = 3711687811381664301ULL;
signed char var_12 = (signed char)-45;
int zero = 0;
int var_14 = 1166741268;
unsigned char var_15 = (unsigned char)168;
_Bool var_16 = (_Bool)0;
long long int var_17 = 6351251527657973749LL;
unsigned short var_18 = (unsigned short)50020;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
