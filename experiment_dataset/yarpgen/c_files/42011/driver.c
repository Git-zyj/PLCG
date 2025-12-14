#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)174;
unsigned long long int var_1 = 6939130260103605348ULL;
int var_2 = -1064904431;
unsigned long long int var_3 = 16278631971035913832ULL;
unsigned long long int var_7 = 13709180312789451247ULL;
int zero = 0;
unsigned long long int var_10 = 11115942048347291419ULL;
unsigned int var_11 = 2338932406U;
short var_12 = (short)-19643;
unsigned long long int var_13 = 4996800824835241585ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
