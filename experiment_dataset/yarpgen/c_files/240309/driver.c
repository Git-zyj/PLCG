#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 331170565U;
short var_4 = (short)3809;
long long int var_6 = 326872396458986197LL;
unsigned long long int var_7 = 18143371749020951592ULL;
unsigned char var_8 = (unsigned char)102;
long long int var_9 = 9168188686921351598LL;
int var_10 = 896417120;
unsigned char var_12 = (unsigned char)67;
int var_13 = -1880377406;
unsigned short var_14 = (unsigned short)2348;
_Bool var_15 = (_Bool)0;
unsigned char var_17 = (unsigned char)142;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)32;
void init() {
}

void checksum() {
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
