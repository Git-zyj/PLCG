#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-47;
signed char var_1 = (signed char)-16;
int var_2 = 10623212;
unsigned int var_3 = 1750750452U;
short var_6 = (short)-19056;
int var_8 = 54286788;
unsigned short var_9 = (unsigned short)46608;
int var_11 = 867056422;
signed char var_14 = (signed char)-82;
int zero = 0;
signed char var_16 = (signed char)-82;
int var_17 = 768043359;
int var_18 = -1152538301;
int var_19 = -535416185;
int var_20 = -83585269;
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
