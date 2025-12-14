#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)21413;
int var_2 = -1740191349;
unsigned short var_3 = (unsigned short)28443;
int var_5 = 1967273920;
long long int var_7 = 1920195434724181830LL;
short var_8 = (short)13663;
unsigned short var_9 = (unsigned short)54901;
int var_11 = 993098086;
int zero = 0;
unsigned short var_13 = (unsigned short)50809;
signed char var_14 = (signed char)96;
short var_15 = (short)-8221;
int var_16 = 73753498;
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
