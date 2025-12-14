#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -582550594967386162LL;
unsigned int var_3 = 3470502531U;
unsigned int var_7 = 1081997682U;
unsigned int var_8 = 197213626U;
unsigned int var_9 = 4132954878U;
long long int var_11 = 5016338003368162235LL;
unsigned int var_15 = 3911340964U;
signed char var_16 = (signed char)-57;
int zero = 0;
signed char var_17 = (signed char)-10;
unsigned int var_18 = 227609761U;
unsigned int var_19 = 632087435U;
unsigned long long int var_20 = 14676481568789844185ULL;
unsigned char var_21 = (unsigned char)26;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
