#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
unsigned long long int var_7 = 2385798261702353459ULL;
unsigned long long int var_8 = 11327925686516751032ULL;
long long int var_9 = -3830674730191581966LL;
long long int var_10 = -8567000458717332827LL;
unsigned int var_12 = 550818460U;
unsigned short var_13 = (unsigned short)31647;
short var_15 = (short)4157;
short var_16 = (short)-15504;
int zero = 0;
unsigned short var_17 = (unsigned short)26742;
int var_18 = -661113919;
unsigned char var_19 = (unsigned char)82;
int var_20 = 305576950;
int var_21 = -1264872161;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
