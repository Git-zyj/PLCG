#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3255751588U;
unsigned int var_1 = 835747515U;
signed char var_2 = (signed char)-83;
signed char var_3 = (signed char)-52;
unsigned char var_4 = (unsigned char)130;
unsigned long long int var_7 = 4653602012183608630ULL;
int var_8 = -744973755;
short var_9 = (short)-6565;
int var_10 = -1859225101;
int zero = 0;
int var_11 = -1181456517;
signed char var_12 = (signed char)90;
int var_13 = 1714408988;
int var_14 = 157562237;
int var_15 = -1097215888;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
