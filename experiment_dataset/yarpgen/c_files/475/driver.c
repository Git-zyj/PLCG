#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)196;
long long int var_10 = 8505488631339537800LL;
short var_14 = (short)-29895;
unsigned short var_16 = (unsigned short)31941;
int zero = 0;
unsigned int var_18 = 90756719U;
unsigned short var_19 = (unsigned short)29560;
long long int var_20 = -8741690278722246212LL;
unsigned int var_21 = 4148960002U;
void init() {
}

void checksum() {
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
