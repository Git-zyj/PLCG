#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1137797117;
unsigned char var_5 = (unsigned char)235;
_Bool var_7 = (_Bool)1;
short var_8 = (short)29379;
int var_9 = -1047419005;
unsigned int var_15 = 2089084055U;
unsigned long long int var_16 = 12198214644131026432ULL;
int zero = 0;
_Bool var_18 = (_Bool)0;
int var_19 = -1584229048;
unsigned long long int var_20 = 8136059707413932113ULL;
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
