#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1857906547;
unsigned char var_3 = (unsigned char)4;
unsigned long long int var_4 = 13244664380508884748ULL;
short var_6 = (short)-3341;
int var_7 = -360682891;
unsigned long long int var_8 = 12302177984052247603ULL;
unsigned char var_9 = (unsigned char)116;
long long int var_11 = 2619195562329711954LL;
unsigned int var_12 = 1307316177U;
int var_13 = -878872451;
unsigned int var_14 = 4060469431U;
int zero = 0;
short var_15 = (short)-772;
short var_16 = (short)3376;
unsigned char var_17 = (unsigned char)108;
short var_18 = (short)26226;
void init() {
}

void checksum() {
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
