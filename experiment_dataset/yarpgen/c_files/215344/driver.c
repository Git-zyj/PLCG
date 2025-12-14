#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)35;
unsigned long long int var_11 = 12416453479162146450ULL;
unsigned long long int var_12 = 14747272609652972235ULL;
int var_13 = -1014521767;
int zero = 0;
int var_19 = 958333510;
short var_20 = (short)12471;
short var_21 = (short)23895;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
