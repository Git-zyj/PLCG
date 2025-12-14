#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38133;
unsigned long long int var_2 = 16293893452234979209ULL;
unsigned long long int var_4 = 14311471209049755238ULL;
signed char var_5 = (signed char)-6;
signed char var_7 = (signed char)52;
unsigned int var_8 = 1840795083U;
long long int var_9 = 1888221288803989558LL;
short var_10 = (short)-14212;
long long int var_11 = 702145676874282114LL;
unsigned int var_12 = 4045700743U;
int zero = 0;
long long int var_13 = -3462756432218955864LL;
unsigned int var_14 = 895176167U;
unsigned int var_15 = 242787273U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
