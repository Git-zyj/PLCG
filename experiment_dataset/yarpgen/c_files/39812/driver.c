#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -3644880841878662151LL;
signed char var_5 = (signed char)102;
signed char var_7 = (signed char)-96;
unsigned long long int var_8 = 9147404340023046397ULL;
unsigned long long int var_9 = 5194014312278390060ULL;
long long int var_12 = -1657646193396780300LL;
int zero = 0;
unsigned int var_13 = 123322857U;
unsigned short var_14 = (unsigned short)19079;
signed char var_15 = (signed char)12;
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
