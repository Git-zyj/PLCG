#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-93;
unsigned int var_3 = 4087148807U;
signed char var_4 = (signed char)124;
unsigned short var_7 = (unsigned short)43524;
int var_9 = 850226163;
short var_11 = (short)3381;
short var_12 = (short)434;
int zero = 0;
short var_13 = (short)-16340;
unsigned long long int var_14 = 13212614660810727176ULL;
long long int var_15 = 1648431046768894093LL;
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
