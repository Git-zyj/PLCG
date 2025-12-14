#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 405102883U;
int var_3 = -1076103499;
unsigned short var_4 = (unsigned short)42039;
unsigned long long int var_5 = 6982049932576710963ULL;
signed char var_7 = (signed char)-24;
signed char var_8 = (signed char)-32;
unsigned short var_9 = (unsigned short)60525;
int zero = 0;
unsigned int var_10 = 1771456471U;
short var_11 = (short)-3077;
unsigned long long int var_12 = 10121340271868668105ULL;
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
