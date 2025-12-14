#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17654181436108771724ULL;
int var_1 = -983181595;
unsigned long long int var_5 = 17503675639340866118ULL;
unsigned int var_7 = 3001629545U;
unsigned long long int var_9 = 15043028749607993723ULL;
unsigned short var_13 = (unsigned short)59397;
unsigned int var_15 = 3852873845U;
int zero = 0;
int var_16 = 825274467;
unsigned int var_17 = 4215246297U;
unsigned long long int var_18 = 13303805463602078619ULL;
short var_19 = (short)11775;
short var_20 = (short)-22577;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
