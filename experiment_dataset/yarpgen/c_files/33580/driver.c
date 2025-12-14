#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 4080039225U;
int var_9 = 720291087;
unsigned short var_10 = (unsigned short)61797;
unsigned short var_12 = (unsigned short)50505;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_18 = -1224071904;
short var_19 = (short)-15218;
unsigned int var_20 = 973211273U;
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
