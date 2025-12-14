#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -977413526;
unsigned int var_3 = 1237801732U;
short var_9 = (short)-946;
unsigned short var_10 = (unsigned short)31777;
unsigned long long int var_11 = 11830996655241905691ULL;
short var_13 = (short)-26515;
int zero = 0;
int var_14 = -287693750;
unsigned int var_15 = 3019029108U;
unsigned long long int var_16 = 11811391191424811877ULL;
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
