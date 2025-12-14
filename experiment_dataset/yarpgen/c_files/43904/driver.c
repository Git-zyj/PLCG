#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1258005107;
unsigned short var_1 = (unsigned short)2554;
unsigned short var_2 = (unsigned short)64638;
unsigned int var_5 = 3900649281U;
unsigned short var_8 = (unsigned short)12104;
unsigned long long int var_9 = 10978385380154956428ULL;
unsigned short var_11 = (unsigned short)6701;
signed char var_15 = (signed char)108;
int zero = 0;
unsigned long long int var_16 = 18101819300961156501ULL;
unsigned short var_17 = (unsigned short)62918;
unsigned long long int var_18 = 10518756454413819145ULL;
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
