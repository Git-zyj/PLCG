#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4745271148404604858ULL;
short var_1 = (short)-15345;
long long int var_4 = -1138548497240455233LL;
unsigned long long int var_5 = 658053401597058916ULL;
unsigned char var_9 = (unsigned char)219;
unsigned long long int var_11 = 8479082748268793368ULL;
int zero = 0;
unsigned int var_19 = 2704033201U;
unsigned long long int var_20 = 5107905524378852048ULL;
unsigned int var_21 = 3923782578U;
unsigned long long int var_22 = 8844779580005551895ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
