#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10115;
long long int var_1 = 3027069533126129689LL;
unsigned long long int var_2 = 7441983614593335200ULL;
long long int var_3 = 4399079992268380889LL;
unsigned long long int var_4 = 11491470841121165055ULL;
long long int var_5 = -1585346951469533992LL;
signed char var_7 = (signed char)61;
unsigned int var_10 = 3319599127U;
int zero = 0;
unsigned int var_12 = 4047505367U;
unsigned short var_13 = (unsigned short)60177;
unsigned int var_14 = 636862961U;
signed char var_15 = (signed char)49;
signed char var_16 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
