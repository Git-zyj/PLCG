#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4896165187668294812LL;
signed char var_2 = (signed char)40;
unsigned short var_3 = (unsigned short)9191;
int var_5 = -599397484;
unsigned int var_6 = 274872985U;
short var_11 = (short)14954;
int zero = 0;
long long int var_12 = 3562594632116715632LL;
long long int var_13 = -4031190635955002465LL;
signed char var_14 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
