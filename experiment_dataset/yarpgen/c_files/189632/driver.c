#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 366499326260206515ULL;
unsigned short var_8 = (unsigned short)38045;
signed char var_12 = (signed char)-8;
unsigned long long int var_13 = 15857725597658832700ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)6141;
unsigned long long int var_16 = 7565288812343733055ULL;
signed char var_17 = (signed char)-105;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
