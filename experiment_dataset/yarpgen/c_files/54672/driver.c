#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -418843515;
int var_5 = -1481718608;
unsigned char var_7 = (unsigned char)41;
int var_8 = -1408282145;
unsigned int var_10 = 119793485U;
signed char var_12 = (signed char)7;
int zero = 0;
unsigned long long int var_16 = 17831763623942536584ULL;
short var_17 = (short)-4947;
signed char var_18 = (signed char)36;
void init() {
}

void checksum() {
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
