#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2120501596;
signed char var_3 = (signed char)82;
unsigned long long int var_5 = 9550699113357985989ULL;
unsigned int var_7 = 3071431301U;
signed char var_8 = (signed char)-23;
long long int var_17 = -6386970106166785362LL;
int zero = 0;
short var_19 = (short)-17051;
unsigned long long int var_20 = 11845152390026001783ULL;
short var_21 = (short)-17960;
signed char var_22 = (signed char)78;
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
