#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10906264491915065681ULL;
int var_1 = 1125135471;
int var_8 = -2081198950;
signed char var_9 = (signed char)19;
unsigned long long int var_13 = 17591974900284651489ULL;
unsigned int var_14 = 2910628083U;
unsigned short var_15 = (unsigned short)10942;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)122;
int zero = 0;
unsigned char var_18 = (unsigned char)88;
unsigned int var_19 = 2400315273U;
signed char var_20 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
