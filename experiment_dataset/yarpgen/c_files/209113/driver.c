#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1750605909;
signed char var_2 = (signed char)-25;
signed char var_3 = (signed char)-34;
int var_4 = 895222793;
unsigned long long int var_11 = 11446157922249692673ULL;
unsigned long long int var_12 = 15478347418804271023ULL;
unsigned short var_16 = (unsigned short)21955;
int zero = 0;
short var_17 = (short)23432;
unsigned long long int var_18 = 14710116939273617477ULL;
int var_19 = 928588194;
signed char var_20 = (signed char)69;
void init() {
}

void checksum() {
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
