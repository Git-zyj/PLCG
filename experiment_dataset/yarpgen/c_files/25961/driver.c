#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-124;
unsigned int var_1 = 3926094930U;
unsigned int var_3 = 2836990080U;
signed char var_6 = (signed char)-74;
signed char var_9 = (signed char)-47;
signed char var_11 = (signed char)36;
short var_15 = (short)-29118;
signed char var_16 = (signed char)-95;
short var_17 = (short)-21873;
int zero = 0;
signed char var_18 = (signed char)64;
unsigned int var_19 = 3378570126U;
unsigned char var_20 = (unsigned char)64;
short var_21 = (short)-224;
void init() {
}

void checksum() {
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
