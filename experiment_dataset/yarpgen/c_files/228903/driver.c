#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-95;
int var_7 = 1879939934;
unsigned short var_8 = (unsigned short)51530;
unsigned long long int var_9 = 1329652965158160196ULL;
short var_10 = (short)14571;
unsigned int var_11 = 467955577U;
unsigned long long int var_15 = 12006589241475988393ULL;
int zero = 0;
unsigned int var_17 = 2609181120U;
int var_18 = 1306485206;
void init() {
}

void checksum() {
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
