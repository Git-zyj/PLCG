#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned char var_1 = (unsigned char)25;
unsigned char var_2 = (unsigned char)84;
unsigned short var_6 = (unsigned short)23118;
unsigned int var_10 = 3492933390U;
unsigned long long int var_12 = 12952667390836143952ULL;
unsigned short var_13 = (unsigned short)7273;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)31781;
int zero = 0;
unsigned long long int var_16 = 3104640445944212357ULL;
unsigned short var_17 = (unsigned short)61301;
unsigned char var_18 = (unsigned char)201;
unsigned short var_19 = (unsigned short)28577;
unsigned int var_20 = 263511738U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
