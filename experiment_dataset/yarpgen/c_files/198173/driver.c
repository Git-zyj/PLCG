#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -1743815236084978098LL;
short var_7 = (short)-15417;
long long int var_10 = -8879965290413120245LL;
unsigned int var_11 = 714063038U;
short var_12 = (short)-16836;
unsigned char var_13 = (unsigned char)172;
signed char var_16 = (signed char)-45;
int zero = 0;
int var_17 = -532701097;
unsigned long long int var_18 = 578638168713978946ULL;
short var_19 = (short)25111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
