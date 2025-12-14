#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-26828;
unsigned int var_6 = 2353588329U;
unsigned char var_8 = (unsigned char)217;
unsigned int var_9 = 993599387U;
long long int var_11 = 2517431971672757196LL;
unsigned int var_12 = 1643434541U;
signed char var_13 = (signed char)-3;
unsigned long long int var_15 = 4959921951084009579ULL;
int zero = 0;
unsigned int var_19 = 2028607262U;
short var_20 = (short)31991;
unsigned int var_21 = 4148239410U;
signed char var_22 = (signed char)-112;
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
