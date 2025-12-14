#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37726;
short var_3 = (short)554;
unsigned long long int var_4 = 7592904192166834643ULL;
unsigned long long int var_5 = 11958997071351781423ULL;
unsigned char var_6 = (unsigned char)40;
int zero = 0;
short var_13 = (short)1276;
signed char var_14 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
