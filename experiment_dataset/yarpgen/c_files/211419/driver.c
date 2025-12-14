#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1250302990;
short var_2 = (short)3735;
unsigned char var_3 = (unsigned char)219;
int var_5 = -1329248898;
unsigned long long int var_7 = 11145106133576063106ULL;
unsigned char var_8 = (unsigned char)161;
unsigned char var_11 = (unsigned char)134;
int zero = 0;
unsigned int var_13 = 2619044420U;
signed char var_14 = (signed char)-76;
int var_15 = -994625655;
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
