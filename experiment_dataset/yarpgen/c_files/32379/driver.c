#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2317019226294418861LL;
unsigned short var_3 = (unsigned short)38726;
int var_6 = -1510971457;
unsigned long long int var_9 = 3354340394373338431ULL;
signed char var_10 = (signed char)-125;
unsigned int var_12 = 453869003U;
int zero = 0;
signed char var_16 = (signed char)15;
unsigned long long int var_17 = 7683758341047430982ULL;
signed char var_18 = (signed char)91;
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
