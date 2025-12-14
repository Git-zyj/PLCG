#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27732;
short var_4 = (short)-29383;
unsigned short var_5 = (unsigned short)26033;
long long int var_8 = 8474960149618996743LL;
int var_11 = -2142419271;
unsigned short var_12 = (unsigned short)41461;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)23;
long long int var_15 = 5226753494905873337LL;
unsigned short var_16 = (unsigned short)17498;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
