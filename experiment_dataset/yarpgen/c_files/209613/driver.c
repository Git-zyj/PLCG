#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1972333506;
int var_1 = -1591152856;
int var_2 = -1587605021;
int var_3 = -1498977340;
signed char var_4 = (signed char)-95;
int var_5 = 159523682;
int var_7 = 1453200844;
signed char var_8 = (signed char)-60;
int var_9 = 1597070214;
signed char var_11 = (signed char)115;
signed char var_13 = (signed char)37;
int zero = 0;
unsigned int var_14 = 2879090774U;
int var_15 = 529605429;
signed char var_16 = (signed char)-32;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 1557002884U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
