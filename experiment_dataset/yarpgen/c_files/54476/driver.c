#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27830;
unsigned int var_4 = 917311586U;
_Bool var_8 = (_Bool)1;
short var_9 = (short)14093;
unsigned long long int var_11 = 5255351329135123769ULL;
int var_13 = -219893270;
int zero = 0;
unsigned int var_16 = 2719376744U;
long long int var_17 = 5658456048049583958LL;
unsigned short var_18 = (unsigned short)26538;
int var_19 = 1458150429;
unsigned short var_20 = (unsigned short)29890;
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
