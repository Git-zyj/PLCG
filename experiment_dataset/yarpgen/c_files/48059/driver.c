#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5428796257129315562LL;
unsigned short var_1 = (unsigned short)42336;
long long int var_2 = -1054842376503794502LL;
unsigned short var_4 = (unsigned short)51655;
long long int var_5 = -853035121825129911LL;
unsigned long long int var_8 = 13219165686116189464ULL;
unsigned short var_9 = (unsigned short)27309;
int var_12 = 982255251;
int zero = 0;
unsigned short var_13 = (unsigned short)11351;
signed char var_14 = (signed char)81;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
