#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 507520989;
unsigned short var_9 = (unsigned short)31363;
signed char var_12 = (signed char)-80;
int var_13 = -253271084;
unsigned long long int var_14 = 13080720359243199375ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)25167;
unsigned char var_19 = (unsigned char)136;
unsigned long long int var_20 = 13086493653829970104ULL;
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
