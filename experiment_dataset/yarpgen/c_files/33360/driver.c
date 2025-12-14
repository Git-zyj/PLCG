#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25159;
unsigned char var_1 = (unsigned char)111;
int var_2 = 595914889;
signed char var_3 = (signed char)65;
int var_5 = 289151052;
int var_6 = -1698043407;
unsigned int var_7 = 578845404U;
unsigned int var_8 = 2344809779U;
int zero = 0;
signed char var_10 = (signed char)-68;
short var_11 = (short)15247;
int var_12 = 970251153;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
