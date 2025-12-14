#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)107;
int var_1 = 771859311;
int var_2 = 2049025887;
signed char var_3 = (signed char)14;
long long int var_4 = -4145094558821747744LL;
unsigned char var_6 = (unsigned char)32;
int var_7 = 697206626;
long long int var_8 = -991503398882496709LL;
short var_9 = (short)-2972;
unsigned int var_11 = 919319505U;
unsigned long long int var_13 = 158069730182249025ULL;
unsigned long long int var_14 = 7590202955287415793ULL;
int zero = 0;
unsigned long long int var_15 = 13792284920356894904ULL;
short var_16 = (short)13396;
unsigned int var_17 = 3745730559U;
unsigned char var_18 = (unsigned char)116;
void init() {
}

void checksum() {
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
