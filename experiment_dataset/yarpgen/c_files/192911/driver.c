#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)18;
long long int var_2 = -7303817958672733591LL;
unsigned short var_5 = (unsigned short)61581;
unsigned int var_7 = 2125696700U;
short var_8 = (short)9140;
long long int var_9 = 6169073785354855704LL;
unsigned char var_10 = (unsigned char)230;
long long int var_12 = 1931002105902098292LL;
int var_15 = -1048731973;
int zero = 0;
long long int var_20 = 1269634823018915045LL;
unsigned long long int var_21 = 18056610607780694040ULL;
void init() {
}

void checksum() {
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
