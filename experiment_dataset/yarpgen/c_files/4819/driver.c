#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26614;
short var_8 = (short)-32047;
unsigned long long int var_11 = 3121051380927955264ULL;
long long int var_12 = 3847001320594224247LL;
unsigned long long int var_15 = 15554105890771438429ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)44354;
unsigned long long int var_17 = 3646878357550584612ULL;
unsigned long long int var_18 = 14151188969211403300ULL;
int var_19 = 1074610723;
int var_20 = 192519097;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
