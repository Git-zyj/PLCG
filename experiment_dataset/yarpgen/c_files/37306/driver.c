#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-28;
int var_1 = 1655622223;
int var_2 = -1632413496;
unsigned char var_3 = (unsigned char)232;
unsigned int var_4 = 291053282U;
unsigned int var_9 = 4033168944U;
int var_10 = 1354158040;
unsigned int var_12 = 1492634746U;
signed char var_13 = (signed char)111;
signed char var_14 = (signed char)-62;
int zero = 0;
unsigned int var_15 = 2934197865U;
unsigned int var_16 = 4152096920U;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)240;
unsigned long long int var_19 = 7387692733215512947ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
